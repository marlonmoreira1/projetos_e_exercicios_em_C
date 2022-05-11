#include <stdio.h>

int main(){
	
	int cont;
	float nota1,nota2,nota3,media;
	
	for(cont=1;cont<=40;cont++){
		
		printf("Digite uma nota de 0 a 10:");
		scanf(" %f", &nota1);
		
		printf("Digite uma nota de 0 a 10:");
		scanf(" %f", &nota2);
		
		printf("Digite uma nota de 0 a 10:");
		scanf(" %f", &nota3);
		
		media = (nota1+nota2+nota3)/3;
		
		if(media>=7){
			
			printf("Aprovado sua media foi %f\n",media);
			
		}else{
			
			printf("Reprovado sua media foi %f\n",media);
		}
		
				
	}
	
	
	
	
	
	
}
