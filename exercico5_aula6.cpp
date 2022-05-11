#include <stdio.h>

int main()
{
	int vet50[5],ind,numero,achou;
	printf("Digite os numeros do vetor: ");
	for(ind=0;ind<=4;ind++)
	{
		scanf("%d", &vet50[ind]);
		
	}
	
	int cont = 0;
	while(cont<=4)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		achou=0;
		for(ind=0;ind<=4;ind++)
		{
			if(numero==vet50[ind])
			{
				achou=1;
				if(achou==1){
					printf("vet50: %d indice: %d numero: %d\n",vet50[ind],ind,numero);
				}							
			}			
		}
		if(achou==0){
			printf("nao esta no vetor\n");
		}		
		cont+=1;
	}
	
}
