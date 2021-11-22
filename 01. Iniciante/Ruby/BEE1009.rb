# beecrowd 1009 - Salário com Bônus
vendedor = gets.chomp
salario = gets.chomp.to_f
vendas = gets.chomp.to_f
salario += vendas * 0.15
puts format('TOTAL = R$ %.2f', salario)
