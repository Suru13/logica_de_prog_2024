
#include <stdio.h>
#include <stdlib.h>


//Os produtos possuem ID, nome, descri¸c˜ao, pre¸co e categoria
struct produto
{
    int id;
    char nome[20];
    char descricao[50];
    double preco;
    char categoria[50];
    struct produto* prox;
};

typedef struct produto Produto;

Produto* cria_lista();
Produto* alocar();
void liberar(Produto * p);
void insert (Produto** cab, int i);


int main()
{

    
    return 0;
}

Produto* cria_lista()
{
    return NULL;
}


void insert (Produto** cab, int i)
{
    Produto *novo = alocar();
    novo->id = i;
    novo->prox = *cab;
    *cab = novo;

}

Produto* alocar()
{
    return (Produto*)malloc(sizeof(Produto));
}

void liberar(Produto* p)
{
    free(p);
    p=NULL;
}

void imprime(Produto* cab)
{
    
    while(cab->prox!=NULL)
    {
        Produto* novo = cab;
        printf("%d", novo->id);
        novo = novo ->prox;
    }
}