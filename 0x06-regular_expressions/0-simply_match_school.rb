#!/usr/bin/env ruby
#The regular expression must match School

input_str  = ARGV[0]
regex = /School/
  puts input_str.scan(regex).join
