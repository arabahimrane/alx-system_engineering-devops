#!/usr/bin/env bash
#read etc pass with shell
while IFS=: read -r username _ id _ _ dir _ ; do
	echo "$username:$id:$dir"	
done < /etc/passwd
