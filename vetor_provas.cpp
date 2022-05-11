#include <stdio.h>

int main(){
	const int tam_vet=5,total_vet=3;
	float prova1[tam_vet],prova2[tam_vet],prova3[tam_vet];
	float sum_p1,sum_p2,sum_p3,media_p1,media_p2,media_p3,media_aluno,media_turma,media_turma2;
	int pos;
	sum_p1=sum_p2=sum_p3=0;
	
	for(pos=0;pos<=4;pos++){
		
		printf("Digite a nota da p1: ");
		scanf("%f",&prova1[pos]);
		
		printf("Digite a nota da p2: ");
		scanf("%f",&prova2[pos]);
		
		printf("Digite a nota da p3: ");
		scanf("%f",&prova3[pos]);
		
		sum_p1=sum_p1+prova1[pos];
		sum_p2=sum_p2+prova2[pos];
		sum_p3=sum_p3+prova3[pos];
		
		media_aluno=(prova1[pos]+prova2[pos]+prova3[pos])/total_vet;
		printf("media aluno: %d = %.2f\n",(pos+1),media_aluno);
		
	}
	
	media_p1=sum_p1/tam_vet;
	printf("media prova1: %.2f\n",media_p1);
	
	media_p2=sum_p2/tam_vet;
	printf("media prova2: %.2f\n",media_p2);
	
	media_p3=sum_p3/tam_vet;
	printf("media prova3: %.2f\n",media_p3);
	
	media_turma=(media_p1+media_p2+media_p3)/total_vet;
	printf("media turma: %.2f\n",media_turma);
	
	media_turma2=(sum_p1+sum_p2+sum_p3)/(total_vet*tam_vet);
	printf("media turma: %.2f",media_turma2);
}
