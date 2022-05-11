vogais = {'a': 0,'e': 0,'i': 0,'o': 0,'u': 0}
letras = []
letra = ''

while letra != 'z':
	letra = input('Digite uma palavra: ')
	if letra=='a':
		vogais['a']+=1
	elif letra=='e':
		vogais['e']+=1
	elif letra=='i':
		vogais['i']+=1
	elif letra=='o':
		vogais['o']+=1
	elif letra=='u':
		vogais['u']+=1
	letras.append(letra)

print(letras)
print(vogais)