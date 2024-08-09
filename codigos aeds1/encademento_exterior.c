
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 9


struct no
{
    char nota[5];
    struct no *prox;
};

void criar_lista(struct no ** Lista,int n);
struct no* busca(struct no **Lista, char k[5], int i);
void alocar_memo(struct no *p);
int hash(char c);
void insert( char k[5], struct no**Lista,struct no* p);


int main()
{
    char cod[]="MIXSTRING";
    
    return 0;
}


void criar_lista (struct no ** Lista,int n)
{
    for(int i =1; i<= n; i++)
    {
        Lista[i]= NULL;

    }
}

struct no* busca(struct no **Lista, char k[5], int i)
{
    struct no *p = Lista[i];

    while (p!=NULL && (strcmp(p->nota, k)!=0))
          p = p->prox; 
    return p;
}

void insert (char k[5], struct no**Lista,struct no* p)
{
    int i = hash(k);
    p = busca(Lista, k, i);
    if(p!=NULL)
    {
       alocar_memo(p);
       strcpy(k,p->nota);
       p->prox = Lista[i];
       Lista[i]= p;

    }
    else
        p->prox = NULL;
}

int hash(char c)
{
    return c % 9 +1;
}

void alocar_memo(struct no *p)
{
    p = (struct no*)malloc(sizeof(struct no));
}
