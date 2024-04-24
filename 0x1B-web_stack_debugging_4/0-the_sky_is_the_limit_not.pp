# Increases the amount of traffic an Nginx server can handle.

# Define ulimit value
$ulimit_value = 4096

# Increase the ULIMIT of the default file
file { '/etc/default/nginx':
  ensure  => present,
  content => template('nginx/default.erb'),
  notify  => Exec['nginx-restart'],
}

# Restart Nginx only if the file changes
exec { 'nginx-restart':
  command     => '/etc/init.d/nginx restart',
  refreshonly => true,
  subscribe   => File['/etc/default/nginx'],
  path        => ['/usr/sbin', '/usr/bin', '/sbin', '/bin'],
  logoutput   => true,
}
