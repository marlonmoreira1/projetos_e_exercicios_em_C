#include <iostream>
using namespace std;

int main() {
	
	float altura;
	float peso;
	float imc;
	
	altura = 1.87;
	peso = 67.0;
	
	printf("O peso = %f e a altura = %f",peso,altura);
	
	imc = peso / (altura*altura);
	
	printf("\nO IMC = %f", imc);
}



