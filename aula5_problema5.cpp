#include <stdio.h>

int main(){
	
	
	float taxa,salario,maior;
	maior = 0;
	
	
	printf("Digite uma taxa:");
	scanf(" %f", &taxa);
	
	for(int i=1;i<=5;i++){
		
		printf("Digite um salario:");
		scanf(" %f", &salario);
		
		salario = salario * ((taxa/100)+1);
		printf("\nNovo salario eh %f\n",salario);
		
		if(salario > maior){
			maior = salario;
		}
		
	}
	
	printf("\nO maior salario eh %f",maior);
}
