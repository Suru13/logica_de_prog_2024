
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int chave;
    struct no * prox;

}No;


typedef struct lista{

    No* cabeca;
}Lista;


Lista * criaLista();

int main()
{
    Lista *lista = criarLista();

    inserirelmt(lista,1,0);
    imprimirLista(lista);
    inserirelmt(lista,2,0);
    imprimirLista(lista);
    removerNo(lista,2);
    imprimirLista(lista);
    
    return 0;
}

Lista * criaLista(){
    Lista *lista = (Lista *) malloc(sizeof(Lista));
    lista->cabeca = NULL;
    return lista;
}

No * inserirNo(Lista *lista, int x,int i){
    No * novo = ( No *) malloc(sizeof(No));
    novo->chave = x;
    if(i==0){
        lista->cabeca = novo->prox;
        lista->cabeca = novo;
    }
    else{
        int j=1;
        No* anterior = lista->cabeca;
        if(novo!=NULL && j<i){
            novo = novo->prox;
            j++;
        }
        if(anterior!=NULL){
            novo->prox = anterior->prox;
            novo = anterior->prox;

        }
    }
}