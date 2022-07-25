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
		printf("ERRO: memory allocation problems.\n");
		exit (1);
	}
	novo->chave = valor;
	novo->prox = NULL;
	return novo;
}

No *insereInicio(No *L, int valor){
	No *novo = criaNo(valor);
	novo->prox = L;
	L = novo;
	return L;
}


void imprime(No *L){
	No *aux = L;
	while(aux != NULL){
		printf("%d ",aux->chave);
		aux = aux->prox;
	}
	printf("\n");
}


int main(){
    
    No *L = NULL;

    L = insereInicio(L, 8);
    L = insereInicio(L, 8);
    L = insereInicio(L, 8);
    L = insereInicio(L, 8);
    L = insereInicio(L, 7);

    imprime(L);

    printf("rodou!\n");
    

    return 0;

}