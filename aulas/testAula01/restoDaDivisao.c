#include<stdio.h>

//function resto da divisão
int resto(int a, int b)
{
    int q = a / b;
    int r = a - q * b;
    return r;
}

int main()
{
    //print in console resto da divisao de 5 por 2
    printf("resto da divisao: %d \n", resto(5,2));
    return 0;
}