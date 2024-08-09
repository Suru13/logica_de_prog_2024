

#include "gerenciar_prod.h"


Produto* criar_lista_prod()
{
    return NULL;
}

Produto* alocar_prod()
{
    return (Produto*)malloc(sizeof(Produto));
}

void inserir_prod(Produto ** cab,int id)
{
    Produto * p = alocar();

    printf("Informe o nome do produto: ");
    scanf(" %51[^\n]", p->nome);

    printf("Informe o preço do produto: ");
    scanf("%lf", &p->preco);

    printf("Informe a categoria do produto: ");
    scanf(" %51[^\n]", p->categoria);

    printf("Informe a descrição do produto: ");
    scanf(" %101[^\n]", p->descricao);

    if(*cab == NULL)
    {
        p->ant = NULL;
        *cab = p;
        p->id = 1;
    }
    else
    {
        Produto * atual = *cab;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = p;
        p->ant = atual;
        p->id = p->ant->id + 1 ;
        
    }
}

void liberar_prod(Produto* p)
{
    free(p);
    p=NULL;
}

void remover_prod(int id,Produto ** cab){
    Produto * p = *cab;

    if(*cab == NULL){
        puts(" A lista dos produtos está Vazia!");
        return;
    }
    while (p != NULL)
    {
        if(p->id == id)
        {
            if(p->prox == NULL)
            {
                p->ant->prox = NULL;
            } else
            {
                p->prox->ant = p->ant;
            }

            if(p->ant == NULL)
            {
                p->prox->ant == NULL;
                *cab = p->prox;
            } else{
                p->ant->prox = p->prox;
            }

            liberar(p);
        }
        p = p->prox;
    }
    if(p == NULL)
    {
        printf("\n O produto com ID: %d não é encontrado na lista dos produtos\n", id);
    }
    
}

void editar_prod(int id, Produto **cab)
{
    Produto * p = *cab;
    while (p != NULL )
    {
        if(p->id == id)
        {
            
            printf("Nome: ");
            scanf(" %51[^\n]", p->nome);

            printf("Preço: ");
            scanf("%lf", &p->preco);

            printf("Categoria: ");
            scanf(" %51[^\n]", p->categoria);

            printf("Descrição: ");
            scanf(" %101[^\n]", p->descricao);

            break;
        }
        p = p->prox;
    }
    if(p == NULL)
    {
        printf("\n O produto com  ID: %d não é encontrado na lista dos produtos\n", id);
    }
    
}

void printar_prod(int n,Produto * p)
{
    
    if(!n)
    {
        while(p != NULL)
        {
            printf("\n");
            Puts("<---------------------------------------------->");
            printf("ID: %d\n", p->id);
            printf("Nome: %s\n", p->nome);
            printf("Categoria: %s\n", p->categoria);
            printf("Preco: %.2f\n", p->preco);
            printf("Descrição: %s\n", p->descricao);
            Puts("<---------------------------------------------->");
            printf("\n");
            p = p->prox;
        }
    }
    else
    {
        while(p != NULL)
        {
            if(p->id == n)
            {
                printf("\n");
                Puts("<---------------------------------------------->");
                printf("ID: %d\n", p->id);
                printf("Nome: %s\n", p->nome);
                printf("Categoria: %s\n", p->categoria);
                printf("Preco: %.2f\n", p->preco);
                printf("Descrição: %s\n", p->descricao);
                Puts("<---------------------------------------------->");
                printf("\n");
                break;
            }
            else
            {
                p = p->prox;
            }
        }
    }
}

