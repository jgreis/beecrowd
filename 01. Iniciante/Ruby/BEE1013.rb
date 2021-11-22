# beecrowd 1013 - O Maior
# Wrong answer (100%) ???
num = gets.split(' ')

if num[0].to_i > num[1].to_i && num[1].to_i > num[2].to_i
  puts "#{num[0]} eh o maior"
elsif num[1].to_i > num[0].to_i && num[0].to_i > num[2].to_i
  puts "#{num[1]} eh o maior"
else
  puts "#{num[2]} eh o maior"
end
