#include <stdio.h>

int main(){
	int vet[8] = {5,1,4,2,7,8,3,6},aux,ind;
	
    for (ind=7;ind>=4;ind--)

   {

      aux=vet[7-ind];
      printf("aux eh %d vet[ind] eh %d\n",aux,vet[ind]);
      vet[7-ind]=vet[ind];
      
      vet[ind]=aux;      
      printf("aux eh %d vet[ind] virou %d\n",aux,vet[ind]);

   }
}



 


 

   
