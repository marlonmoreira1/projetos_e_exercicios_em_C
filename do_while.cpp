#include <stdio.h>

int main(){
	
	int numero;
	
	do{
		
		printf("Digite um numero: ");
		scanf(" %d", &numero);
		
		if(numero!=0 && numero!=9){
			
			if(numero%2==0){
				printf("\nSeu sucessor %d\n",numero+1);
			}
			else{
				printf("\nSeu antecessor %d\n",numero-1);
			}
		}
	}
	while(numero!=0 && numero!=9);
}
