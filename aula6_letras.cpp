#include <stdio.h>

int main()
{
	int vogais[5],cont;
	char letra,letras[5]={'a','e','i','o','u'};
	
	vogais[2] = 0;
	
	while(letra!='z')
	{
		printf("Digite uma letra: ");
		scanf(" %c", &letra);
		
		switch(letra)
		{
			case 'a':
				vogais[0]++;
				break;
			case 'e':
				vogais[1]++;
				break;
			case 'i':
				vogais[2]++;
				break;
			case 'o':
				vogais[3]++;
				break;
			case 'u':
				vogais[4]++;
				break;						
		}
	}
	
	for(cont=0;cont<=4;cont++)
	{
		printf("%c: %d\n",letras[cont],vogais[cont]);
	}
}
