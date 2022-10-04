#include<stdio.h>

void fat (int n);

/* Função para imprimir o valor do fatorial */

void fat( int n )
{
    int i;
    int f = 1;

    for(i = 1; i <= n; i++)
        f*= i;
    printf("Fatorial = %d\n", f);

}

/* Função Principal */

int main(void)
{
    int n;
    scanf("%d", &n);
    fat(n);
}