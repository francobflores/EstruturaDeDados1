/*desejamos converter a altura de uma pessoa, dada em metros, para altura
expressa em pés e polegadas. Sabe-se que 1 pé tem 30,48cm e 1 polegada tem
2,54cm. */

#include<stdio.h>

int main(void)
{
	int f; //numero de pés
	float p; //numero em polegadas
	float h; //altura em metros

	//Captura da altura em metros

	printf("Digite a altura em metros: ");
	scanf("%f", &h);

	//Calculo da altura em pés e polegadas

	h = 100 * h; //transformando para centímetros

	f = (int)(h / 30.48); //calculo do numero de pés

	p = (h-f*30.48) / 2.54;

	//Exibe o resultado na tela

	printf("%d ft and %.1f pol\n", f, p);


}