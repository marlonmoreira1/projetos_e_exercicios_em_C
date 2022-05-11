#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int contagem;
	float salario,maior,media,soma;
	
	maior = 0;
	salario = 0;
	
	
	for(contagem=1;contagem<=10;contagem++){
	
		printf("Digite um salario: ");
		scanf(" %f", &salario);
		
		soma += salario;
		
		if(salario > maior){
			
			maior = salario;
		}
	
	media = soma/10;	
	printf("O maior salario e %2f\n",maior);
	printf("A media salarial e %2f\n",media);
	
	
	}
		
	
	
	
}
