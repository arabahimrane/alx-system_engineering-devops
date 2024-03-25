#  Bash script that uses ssh to connect to your server using the private key 
# 100-puppet_ssh_config.pp

file { '/etc/ssh/ssh_config':
  ensure  => present,
  content =>"
	host *
	IdentityFile ~/.ssh/school
	PasswordAuthentication no
 "
}
