#include <stdio.h>

int main()
{
	int i;
	float notas[7],soma,media;
	soma = 0;
	for(i=0;i<7;i++)
	{
		printf("Digite uma nota: ");
		scanf(" %f", &notas[i]);
		soma+=notas[i];
	}
	
	media = soma/i;
	printf("media = %.2f\n",media);
	for(i=0;i<7;i++)
	{
		if(notas[i]>=media)
		{
			printf("nota = %.2f\n indice = %d\n",notas[i],i);
		}
	}
}
