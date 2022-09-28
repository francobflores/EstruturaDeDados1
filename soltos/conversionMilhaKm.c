#include<stdio.h> // interface com biblioteca de entrada e saída

#define milhaKM 1.609 //fator de conversão

int main(void)
{
	double milhas, km;

	do
	{
		printf("Distancia em milhas?");
		scanf("%le", &milhas);   // recebendo entrada
	} while(milhas < 0.0);
	
		km = milhas * milhaKM; // conversão da distância
		
	printf("Distancia em quilometros é %lf\n", km); //impressão 

	return 0;

}

