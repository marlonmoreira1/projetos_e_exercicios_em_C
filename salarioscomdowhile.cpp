#include <stdio.h>

int main(){
	
	int cont;
	float sal_liq,sal_brut,imposto,total_imp,total_sal_brut,total_sal_liq;
	
	total_imp = total_sal_brut = total_sal_liq = 0;
	cont = 1;
	
	
	do{
		
		printf("Digite seu salario: ");
		scanf(" %f", &sal_brut);
		
		if(sal_brut>=0 && sal_brut<=999.00){
			imposto = sal_brut * 0.10;						
			}
		if(sal_brut>=999.01 && sal_brut<=1999.00){
			
			imposto = sal_brut * 0.15;				
			}
		if(sal_brut>=1999.01 && sal_brut<=9999.00){
			imposto = sal_brut * 0.20;							
			}
		if(sal_brut>=9999.01 && sal_brut<=99999.00){
			imposto = sal_brut * 0.25;			
			}
		if(sal_brut>=99999.01){
			imposto = sal_brut * 0.30;				
			}
			
		sal_liq = sal_brut - imposto;	
		printf("Seu salario %.2f\n",sal_liq);
		
		total_sal_brut+=sal_brut;
		total_sal_liq+=sal_liq;
		total_imp+=imposto;		
		
		cont+=1;
		
		
	}
	while(cont<=5);
	
	printf("Total imposto %.2f\n",total_imp);
	printf("Total salario bruto %.2f\n",total_sal_brut);
	printf("Total salario liquido %.2f\n",total_sal_liq);
	
	
}
