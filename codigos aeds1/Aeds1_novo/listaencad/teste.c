
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int chave;
    struct no * prox;

}No;


typedef struct lista{

    No* cabeca;
}Lista;


Lista * criarLista();
void inserirelmt(Lista *l, int x,int i);
No * acessarLista(Lista* l, int i);
No * buscaLista(Lista* l, int elmt);
void imprimirLista(Lista *l);

void removerNo(Lista *l, int x);

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

Lista * criarLista(){
   Lista *  l = (Lista * ) malloc(sizeof(Lista));
   l->cabeca = NULL;
   return l;
}

void inserirelmt(Lista *l, int x,int i){

    No * novo = (No * ) malloc(sizeof(No));
    novo->chave = x;
    if(i==0){
        novo->prox= l->cabeca;
        l->cabeca = novo;
    }
    else {
        int j=1;
        No * anterior = l->cabeca;
        while(anterior!=NULL && j < i){
            anterior = anterior->prox;
            j++;
        }
        if(anterior!=NULL){
            novo->prox = anterior->prox;
            anterior->prox = novo;
        }
    }
}

No * acessarLista(Lista* l, int i){
    No * noacesso = l->cabeca;
    int j=0;
    while(noacesso!= NULL && j!=i){
        noacesso = noacesso->prox;
        j++;
    }
    return noacesso;
}

No * buscaLista(Lista* l, int elmt){
    No * nobuscado = l->cabeca;
    while(nobuscado!= NULL && nobuscado->chave != elmt){
        
        nobuscado = nobuscado->prox;
    }
    return nobuscado;
}

void imprimirLista(Lista *l){


    No * novo = l->cabeca;

    while(novo!=NULL){

        printf("%d ", novo->chave);

         novo = novo->prox; 
    }
    printf("\n");
}

void removerNo(Lista *l, int x){

    No * atual = l->cabeca;
    No * anterior = NULL;

    while(atual!=NULL && atual->chave != x){
       anterior = atual;
       atual = atual->prox;
    }

    if(atual == NULL)

         printf("Não encontrado");

    else if(anterior == NULL)

         l->cabeca = atual ->prox;
    
    else 
         anterior ->prox = atual ->prox;

    free(atual);
}
