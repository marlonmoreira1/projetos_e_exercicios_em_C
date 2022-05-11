#include <stdio.h>

int main(){
	
	int cont;
	float nota1,nota2,nota3,media;
	
	cont=1;
	
	while(cont<=5){
		
		printf("Digite uma nota: ");
		scanf(" %f", &nota1);
		
		printf("Digite uma nota: ");
		scanf(" %f", &nota2);
		
		printf("Digite uma nota: ");
		scanf(" %f", &nota3);
		
		media = (nota1+nota2+nota3)/3;
		
		if(media>=7){
			
			printf("Aprovado com nota %.2f\n",media);
		}else{
			
			printf("Reprovado com nota %.2f\n",media);
		}
		
		cont+=1;
	}
	
}
