# Ensure 'php' is used instead of 'phpp' in the wp-settings.php file
# Ensure 'php' is used instead of 'phpp' in the wp-settings.php file
exec { 'fix_phpp':
  command => 'sed -i s/phpp/php/g /var/www/html/wp-settings.php',
  path    => ['/bin', '/usr/bin', '/usr/local/bin'],
}
