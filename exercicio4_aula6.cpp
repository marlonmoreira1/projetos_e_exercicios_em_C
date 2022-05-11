#include <stdio.h>

int main()
{
	int vetor[50],copia[50],ind;
	
	for(ind=0;ind<=50;ind++)
	{
		vetor[ind]=ind;
		if(vetor[ind]%2==0)
			copia[ind]=vetor[ind]+1;
		else
			copia[ind]=vetor[ind]-1;		
	}
	
	for(ind=0;ind<=50;ind++)
	{
		printf("vetor: %d e copia: %d\n",vetor[ind],copia[ind]);
	}
	
}
