#include <stdio.h>

int main(){
	
	int soma,cont;
	soma=cont=0;
	
	do{
		
		soma+=cont;
		cont++;
	}
	while(cont<=5);
	printf("soma %d",soma);
}
