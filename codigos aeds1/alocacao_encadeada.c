
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




struct no
{
    int c;
    struct no *prox;
};

void criar_lista(struct no * cab,int n);
struct no* busca(struct no *cab, int k);
void alocar_memo(struct no *p);
int hash(char k[5]);
void insert( char k[5], struct no**Lista,struct no* p);


int main()
{
    char cod[]="MIXSTRING";
    
    return 0;
}
void criar_lista (struct no * cab,int n)
{
    for(int i =n; i>0 ; i--)
    {
       struct no *p = criar_no();

    }
}

struct no* busca(struct no *cab, int k)
{
    struct no *pont = cab;
    struct no *p = cab->prox;

    while (p!=NULL)
    {
        if(p->c == k)
           return pont;
        pont = p; 
        p = p->prox; 
    }
    return NULL;
}

void insert( char k[5], struct no**Lista,struct no* p)
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

int hash(char k[5])
{
    return (atoi(k))%9;
}

void alocar_memo(struct no *p)
{
    p = (struct no*)malloc(sizeof(struct no));
}