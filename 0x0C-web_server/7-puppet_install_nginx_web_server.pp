#ime to practice configuring your server with Puppet! 
# Install Nginx package
package { 'nginx':
  provider => 'apt',
}

# Create the main HTML page
file { '/var/www/html/index.nginx-debian.html':
  ensure  => present,
  content => 'Hello World!',
}

# Configure redirection
file { '/etc/nginx/sites-available/default':
  ensure  => present,
  content => "
server {
    listen 80 default_server;
    listen [::]:80 default_server;
    root /var/www/html;
    index index.nginx-debian.html;

    location /redirect_me {
        rewrite ^/redirect_me https://www.youtube.com/watch?v=QH2-TGUlwu4 permanent;
    }

    location / {
        try_files \$uri \$uri/ =404;
    }
}",
}

# Start Nginx service
exec { 'start_nginx':
  command => '/usr/sbin/service nginx start',
  path    => '/usr/bin:/usr/sbin',
  require => File['/etc/nginx/sites-available/default'],
}
