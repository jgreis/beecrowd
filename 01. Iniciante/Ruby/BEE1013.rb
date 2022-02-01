# beecrowd 1013 - O Maior
num = gets.split(' ')
a = num[0].to_i
b = num[1].to_i
c = num[2].to_i

if a > b && b > c
  puts "#{a} eh o maior"
elsif b > a && a > c
  puts "#{b} eh o maior"
else
  puts "#{c} eh o maior"
end
