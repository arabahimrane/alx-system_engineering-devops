#!/usr/bin/env ruby
#The regular expression must match hbtn

input_str  = ARGV[0]
regex = /^h.n$/
  puts input_str.scan(regex).join
