#include <stdio.h>

int main(){
	
	
	int num1,num2,opcao;
	float resultado;
	
	printf("Escolha uma operacao:\nPara soma digite 1, multiplicacao digite 2, divisao digite 3, Subtracao digite 4\n");
	scanf(" %d", &opcao);
	
	printf("Digite um numero: \n");
	scanf(" %d", &num1);
	
	printf("Digite um numero: \n");
	scanf(" %d", &num2);	
	
	switch(opcao){
		
		case 1: {
			resultado = num1 + num2;
			printf("\nSoma = %f", resultado);
			break;
		}
		
		case 2: {
			resultado = num1 * num2;
			printf("Multiplicacao = %f",resultado);
			break;
		}
		
		case 3: {
			resultado = num1/num2;
			printf("Divisao = %f",resultado);
			break;
		}
		
		case 4: {
			resultado = num1-num2;
			printf("Subtracao = %f",resultado);
			break;
		}
		
		default: printf("\nNumero invalido\n");
	}
	
	
}
	

	
	
	
	
	
