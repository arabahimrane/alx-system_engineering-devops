#!/usr/bin/env bash
#displays Best School 10 times with while and usie bad and good luck.
var=1
while [[ $var -le 10 ]]; do
	if [[ $var -eq 4 ]]; then
		echo "bad luck"
	elif [[ $var -eq 8 ]]; then
		echo "good luck"
	else
		echo "Best School"
	fi
	var=$((var + 1))
done
