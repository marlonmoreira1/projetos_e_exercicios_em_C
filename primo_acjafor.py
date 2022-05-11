primos = []

n_primos = []


for numero in range(1,101):
	contador = 0
	for divisor in range(1,101):
		if numero%divisor==0:
			contador+=1
	if contador>2 or numero==1:
		n_primos.append(numero)
	else:
		primos.append(numero)




print('numeros primos\n',primos)

print('numeros não primos\n', n_primos)
