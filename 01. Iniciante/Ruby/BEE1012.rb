# beecrowd 1012 - Área
vlrs = gets.split(' ')
pi = 3.14159

triangulo = vlrs[0].to_f * vlrs[2].to_f / 2
circulo = pi * vlrs[2].to_f**2
trapezio = vlrs[2].to_f * (vlrs[0].to_f + vlrs[1].to_f) / 2
quadrado = vlrs[1].to_f**2
retangulo = vlrs[0].to_f * vlrs[1].to_f

puts format('TRIANGULO: %.3f', triangulo)
puts format('CIRCULO: %.3f', circulo)
puts format('TRAPEZIO: %.3f', trapezio)
puts format('QUADRADO: %.3f', quadrado)
puts format('RETANGULO: %.3f', retangulo)
