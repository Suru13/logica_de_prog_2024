
#include <stdio.h>
#include <stdlib.h>

struct no
{
    int info;
    struct no *prox;
};


struct no* cria_lista();
struct no* alocar();
void liberar(struct no * p);
void insert (struct no** cab, int i);


int main()
{

    
    return 0;
}

struct no* cria_lista()
{
    return NULL;
}


void insert (struct no** cab, int i)
{
    struct no *novo = alocar();
    novo->info = i;
    novo->prox = *cab;
    *cab = novo;

}

struct no* alocar()
{
    return (struct no*)malloc(sizeof(struct no));
}

void liberar(struct no * p)
{
    free(p);
    p=NULL;
}

void imprime(struct no* cab)
{
    
    while(cab->prox!=NULL)
    {
        struct no* novo = cab;
        printf("%d", novo->info);
        novo = novo ->prox;
    }
}



