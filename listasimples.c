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

No *insereFinal(No *L, int valor){
	No *novo = criaNo(valor);
	No *aux = L;
	if(aux == NULL){
		L = novo;
	}else{
		while(aux->prox != NULL){
			aux = aux->prox;
		}
		aux->prox = novo;
		}
	return L;
}

No *buscaChave(No *L, int valor){
	No *aux = L;
	if(L == NULL)return NULL;
	else{
		while(aux != NULL){
			if(aux->chave == valor) break;
		}
		return aux;
	}
}
No *buscaChaveOrd(No *L, int valor){
	No *aux = L;
	if(L == NULL)return NULL;
	else{
		while(aux != NULL){
			if(aux->chave <= valor) break;
		}
		return aux;
	}
}
No *excluiInicio(No *L){
	No *aux = L;
	if(L == NULL)return NULL;
	else{
		L = L->prox;
		free(aux);
		return L;
	}
}

No *excluiFinal(No *L){
	No *aux = L;
	No *pred = NULL;
	if(L == NULL)return NULL;
	else{
		while(aux->prox != NULL){
			pred = aux;
			aux = aux->prox;
		}
		if(pred == NULL) L = NULL;
		else pred->prox = NULL;
		free(aux);
		return L;
	}
}
No *excluiChave(No *L, int valor){
	No *aux = L;
	No *pred = NULL;
	if(L == NULL)return NULL;
	else{
		while(aux != NULL && valor != aux->chave){
			pred = aux;
			aux = aux->prox;
		}
		if(pred == NULL)L = aux->prox;
		else pred->prox = aux->prox;
		free(aux);
		return L;
	}
}

No *insereOrd(No *L, int valor){
	No *novo =criaNo(valor);
	No *aux = L;
	No *pred = NULL;
	if(L == NULL) L = novo;
	else{
		while(aux != NULL && valor > aux->chave){
			pred = aux;
			aux= aux->prox;
		}
		if(pred == NULL){
			novo->prox = aux;
			L = novo;
		}
		else{
			novo->prox = aux;
			pred->prox = novo;
		}
	}
	return L;
}

No *excluiChaveOrd(No *L, int valor){
	No *aux = L;
	No *pred =NULL;
	if(L == NULL)return NULL;
	else{
		while(aux != NULL && aux->chave == valor){
			if(pred == NULL)L = aux->prox;
			else pred->prox = aux->prox;
			free(aux);
		}
		return L;
	}
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

   
    L = insereFinal(L, 7);
	L = insereFinal(L, 8);
	L = insereFinal(L, 9);
	imprime(L);
	L = excluiChave(L,8);

    imprime(L);
	L = insereOrd(L,5);
	L = insereOrd(L,7);
	L = insereOrd(L,3);
	L = insereOrd(L,15); 

	imprime(L);
/*	
	L = excluiInicio(L);
	
	imprime(L);
	
	L = excluiFinal(L);
	imprime(L);*/
    printf("rodou!\n");
    

    return 0;

}