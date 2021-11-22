# beecrowd 1008 - Salário
func_id = gets.chomp.to_i
hrs_trab = gets.chomp.to_i
vlr_hr = gets.chomp.to_f
salario = hrs_trab * vlr_hr
puts "NUMBER = #{func_id}"
puts format('SALARY = U$ %.2f', salario)
