#include <stdio.h>

int main(){
	
	float av1,av2,media;
	
	printf("Digite sua nota 1: \n");
	scanf(" %f", &av1);
	
	printf("Digite sua nota 2: \n");
	scanf(" %f", &av2);
	
	
	media = (av1 + av2)/2;
	
	if(media >= 7){
		printf("\nParabens Voce foi Aprovado! \n");
	} else{
		printf("\nSinto muito voce foi Reprovado!\nEstude mais!");
	}
	
}
