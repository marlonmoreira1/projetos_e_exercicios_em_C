#include <stdio.h>


int main(){

	
	int numero,contador;
	
	printf("Digite um numero: ");
	scanf(" %d", &numero);
	
	contador =0;	
	for(int divisor=1;divisor<(numero+1);divisor++){
		
		if(numero%divisor==0){
			contador+=1;
		}
	
	
	}		
	
	if(contador>2){
		printf("%d nao eh primo",numero);
	}else{
		
		printf("%d eh primo",numero);	
	}
		
	

	
	
	
}

