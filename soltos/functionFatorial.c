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
/* Função que calcula o fatorial e retorna o seu valor */
int fatWithReturn( int n )
{
    int f = 1;
    int i ;

    for(i = 1; i <= n; i++)
        f*=i;
    
    return f;


}

/* Função Arranjos */

int arranjo( int n, int k )
{
    int a = fatWithReturn(n) / fatWithReturn(n-k);
    return a;
}

/* Função Principal */

int main(void)
{
    int n;
    int aj;
    int k;
/*
    printf("Informe valor do numero inteiro não negativo que deseja obter o fatorial:");
    scanf("%d", &n);
    int fat = fatWithReturn(n);
    printf("Fatorial de %d é %d\n",n, fat);
*/
    printf("informe n:");
    scanf("%d", &n);
    printf("informe k:");
    scanf("%d", &k);

    aj = arranjo(n, k);

    printf("Arranjo é %d\n",aj);

    

}