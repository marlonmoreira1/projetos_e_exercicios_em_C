vetor = [0,1,2,3]

contador = 0

achou = False

numero = 2
while contador <=3 and achou == False:
	if vetor[contador] == numero:
		print('Achou o numero')
		achou = True
		print(achou)
		
	print(achou)	
	print('Não achou o numero')
	contador += 1
