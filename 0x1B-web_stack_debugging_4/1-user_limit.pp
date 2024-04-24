# Increase open file limits for the holberton user

file { '/etc/security/limits.d/holberton.conf':
  ensure  => present,
  content => "holberton hard nofile 4096\nholberton soft nofile 4096\n",
}

exec { 'reload_limits':
  command     => '/bin/systemctl daemon-reload',
  refreshonly => true,
}


