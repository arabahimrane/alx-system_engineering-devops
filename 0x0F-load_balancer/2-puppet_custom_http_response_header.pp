# Puppet manifest to install Nginx with a custom HTTP header

# Update package repositories
exec { 'update':
  provider => shell,
  command  => 'sudo apt-get -y update',
}

# Install Nginx
exec { 'install Nginx':
  provider => shell,
  command  => 'sudo apt-get -y install nginx',
  require  => Exec['update'],
}

# Add custom HTTP header to Nginx configuration
exec { 'add_header':
  provider    => shell,
  environment => ["HOST=${hostname}"],
  command     => 'sudo sed -i "s/include \/etc\/nginx\/sites-enabled\/\*;/include \/etc\/nginx\/sites-enabled\/\*;\n\tadd_header X-Served-By \"$HOST\";/" /etc/nginx/nginx.conf',
  require     => Exec['install Nginx'],
}

# Restart Nginx to apply changes
exec { 'restart Nginx':
  provider => shell,
  command  => 'sudo service nginx restart',
  subscribe => Exec['add_header'],
}

