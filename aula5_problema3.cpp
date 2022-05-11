#include <stdio.h>

int main(){
	
	float salario,media,soma,maior;
	int cont;
	
	soma = maior = 0;
	for(cont=1;cont<=10;cont++){
		
		printf("Digite seu salario: ");
		scanf(" %f", &salario);
		
		soma+=salario;
		if(salario>maior){
			maior = salario;
		}
	}
	
	media = soma/10;
	printf("A media eh %.2f e o maior eh %.2f",media,maior);
}

