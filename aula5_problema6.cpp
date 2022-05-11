#include <stdio.h>

int main(){
	
	int numero,n,pares,impares,cont;
	
	
	
	impares = pares = 0;
	
	printf ("Digite a quantidade de números da lista: ");
	scanf(" %d",&n);
	for(cont=1;cont<=n;cont++){
		printf("Digite um numero: ");
		scanf(" %d", &numero);
		if(numero%2==0){
			pares+=numero;
			
			
		}else{
			
			impares+=numero;
			
		}
	}
	
	printf("Soma dos numeros pares %d\n",pares);
	printf("Soma dos numeros impares %d", impares);
}
