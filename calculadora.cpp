#include <stdio.h>

int main(){
	
	char opcao;
	int num1,num2;
	float resultado;
	
	printf("Escolha uma operacao:\nPara soma digite A, multiplicacao digite M, divisao digite D, Subtracao digite S\n");
	scanf(" %c", &opcao);
	
	printf("Digite um numero: \n");
	scanf(" %d", &num1);
	
	printf("Digite um numero: \n");
	scanf(" %d", &num2);
	
			
	if(opcao == 'A'){
			
		resultado = num1 + num2;
		printf("Soma = %f",resultado);
		
	}if(opcao == 'M'){
			
		resultado = num1 * num2;
		printf("Multiplicacao = %f",resultado);
		
	}if(opcao == 'D'){
			
		resultado = num1/num2;
		printf("Divisao = %f",resultado);
		
	}if(opcao == 'S'){
			
		resultado = num1-num2;
		printf("Subtracao = %f",resultado);
	}
	
	
}
