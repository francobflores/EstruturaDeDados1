#include<stdio.h>

int main(void)
{
	int i , n, f;

	f=1;

	printf("Digite um número inteiro não negativo: ");
	scanf("%d", &n);

	//calculo do fatorial usando while
	i = 1;
	while(i <= n)
	{
		f*=i;
		i++;
	}


	printf("Fatorial: %d\n", f);

	//calculo do fatorial usando for

	int k = 1;

	for(int j = 1; j <= n; j++)
	{	
		k*=j;
	}

	printf("Fatorial: %d\n",k);

}
