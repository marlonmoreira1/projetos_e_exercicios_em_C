#include <stdio.h>

int main(){
	
	char letra;
	int a,e,i,o,u;
	
	a=e=i=o=u=0;
	
	
	
	while(letra!='.'){
	
		printf("Digite uma letra: ");
		scanf(" %c", &letra);
		switch(letra){
			
			case 'a':{
				a+=1;
				break;
			}
			
			case 'e':{
				e+=1;
				break;
			}
			case 'i':{
				i+=1;
				break;
			}
			case 'o':{
				o+=1;
				break;
			}
			case 'u':{
				u+=1;
				break;
			}
		}
		
	
	
		}
		
		
	
	
	printf("a = %d\n e = %d\n i = %d\n o = %d\n u = %d",a,e,i,o,u);
}
