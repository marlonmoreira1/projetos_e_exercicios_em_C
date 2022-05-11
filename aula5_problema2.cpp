#include <stdio.h>

int main(){
	
	int numero,maior;
	numero=1;
	maior=0;
	for(int i=1;i<=15;i++){
		numero+=2;
		maior=numero;
	}
	
	printf("o maior numero eh %d",maior);
}
