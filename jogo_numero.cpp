#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int chute_vetor_baixo(int chute, int vetor[5]){
	for(int i=0;i<=4;i++){
		if(chute==vetor[i]){
			return 1;
				
		}
	}
	
}
	
int chute_vetor_alto(int chute, int vetor[5]){
	for(int i=0;i<=4;i++){
		if(chute==vetor[i]){
			return 1;
				
		}
	}
	
}


int main(){
	int contador,numero,chute;
	contador = 0;
	srand(time(NULL));
	numero = (rand() % 101);
	int proximo_baixo[5] = {numero-5,numero-4,numero-3,numero-2,numero-1};
	int proximo_alto[5] = {numero+5,numero+4,numero+3,numero+2,numero+1};
	

		
		
	while(contador<=9){
		printf("Digite um numero: ");
		scanf("%d",&chute);
		if(chute_vetor_baixo(chute,proximo_baixo)==1){
			printf("Seu palpite foi baixo, mas esta proximo.\n");			
		}else{
			if(chute_vetor_alto(chute,proximo_alto)==1){
			printf("Seu palpite foi alto, mas esta proximo.\n");
		}else{
			if(chute<numero){
			printf("Seu palpite foi baixo.\n");
		}else{
			if(chute>numero){
			printf("Seu palpite foi alto.\n");
		}else{
			if(chute==numero){
			printf("Parabens você acertou!\nO numero era %d.",numero);
			break;
		}
		}
		}
		}
		} 
		contador+=1;
		printf("Voce ainda tem %d jogadas.",(10-contador));
	}
	
	if(contador==10){
		printf("Voce nao acertou!\nO numero era %d",numero);
	}
}
