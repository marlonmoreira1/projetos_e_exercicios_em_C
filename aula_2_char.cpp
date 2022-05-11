#include <iostream>
using namespace std;

int main() {
	
	char palavra[] = "ALFA";
	
	for(int i=0; i<4; i++)
		printf("\npalavra[%d] = %c",i,palavra[i]);
	printf("\n");
	
	palavra[0] = 'B';
	palavra[1] = 69;
	palavra[2] = palavra[2] + 14;
	palavra[3] = 0x41;
	
	printf("\n palavra: %s", palavra);
	
}



