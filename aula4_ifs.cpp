#include <stdio.h>

int main(){
	
	int cadastrado, ativado, logado;
	char opcao;
	
	cadastrado = ativado = logado = 0;
	
	printf("Deseja cadastrar sua conta? S/N	  \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		cadastrado = 1;
		printf("\nConta Cadastrada.\n");
	}
	
	
	printf("Deseja ativar sua conta? S/N	  \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		ativado = 1;
		printf("\nConta Ativada.\n");
	}
	
	
		printf("Deseja logar sua conta? S/N	  \n");
		scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		logado = 1;
		printf("\nConta Logada.\n");
	}
	
	
	
	if((cadastrado == 1) && ((ativado ==1) || (logado == 1))){
		printf("\nSeja bem-vindo.\n");
	} else{
		printf("\nAlgo deu errado!\n");
	}
	
	
	
}
