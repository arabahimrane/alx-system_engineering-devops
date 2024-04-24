#!/usr/bin/env ruby
#The regular expression must match hbtn

input_str  = ARGV[0]
sender = input_str.scan(/\[from:(.+?)\]/)
receiver = input_str.scan(/\[to:(.+?)\]/)
flags=input_str.scan(/\[flags:(.+?)\]/)
  puts [sender, receiver, flags].join(',')
