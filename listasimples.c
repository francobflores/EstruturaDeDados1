#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int chave;
    struct no *prox;

}No;

No *criaNo(int valor){
	No*novo;
	novo = (No*)malloc(sizeof(No));
	if(novo == NULL){
		printf("ERRO: problemas com alocação de memoria.\n");
		exit (1);
	}
	novo->chave = valor;
	novo->prox = NULL;
	return novo;
}

int main(){
    printf("rodou!\n");
    return 0;

}