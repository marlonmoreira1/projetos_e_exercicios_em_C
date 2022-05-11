#include <stdio.h>

int main()
{
	int ind,vetor[100];
	
	for(ind=0;ind<=99;ind++)
	{
		vetor[ind]=ind+1;
	}
	for(ind=99;ind>=0;ind--)
	{
		printf("numero: %d\n indice: %d\n",vetor[ind],ind);
	}
	
}
