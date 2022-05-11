notas = []
contador = 0
soma = 0
for i in range(7):
	nota = float(input('Digite uma nota: '))
	notas.append(nota)
	soma+=nota
	contador+=1

media = soma/contador
print('Média da turma é %.2f' % media)
for i in range(7):
	if notas[i] >= media:
		print('Nota é %.2f e o indice é %d' % (notas[i],i))

