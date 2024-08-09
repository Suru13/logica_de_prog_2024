
#include "cadastro_cliente.h"



Cliente* criar_lista_cliente()
{
    return NULL;
}

Cliente* alocar_cliente()
{
    return (Cliente*)malloc(sizeof(Cliente));
}

void liberar_cliente(Cliente* p)
{
    free(p);
    p=NULL;
}

void remover_cliente(char *cpf,Cliente ** cab){
    Cliente * p = *cab;

    if(*cab == NULL){
        puts(" A lista dos Clientes está Vazia!");
        return;
    }
    while (p != NULL)
    {
        if(strcmp(p->cpf,cpf)==0)
        {
            if(p->prox == NULL)
            {
                p->ant->prox = NULL;
            } 
            else
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
        printf("\n O Cliente com cpf: %s não é encontrado na lista dos Clientes\n", cpf);
    }
    
}

void editar_cliente(char* cpf, Cliente **cab)
{
    Cliente * p = *cab;
    while (p != NULL )
    {
        if(p->cpf == cpf)
        {
            
            printf("Nome: ");
            scanf(" %51[^\n]", p->nome);

            printf("telefone: ");
            scanf(" %51[^\n]", p->telefone);

            printf("Descrição: ");
            scanf(" %51[^\n]", p->email);

            break;
        }
        p = p->prox;
    }
    if(p == NULL)
    {
        printf("\n O Cliente com  cpf: %d não é encontrado na lista dos Clientes\n", cpf);
    }
    
}

void inserir_cliente(Cliente ** cab,char * cpf)
{
    Cliente * p = alocar();
    int cpf = atoi(p->cpf);

    printf("Informe o nome do Cliente: ");
    scanf(" %51[^\n]", p->nome);

    printf("Informe a telefone do Cliente: ");
    scanf(" %15[^\n]", p->telefone);

    printf("Informe a descrição do Cliente: ");
    scanf(" %55[^\n]", p->email);

    if(*cab == NULL)
    {
        p->ant = NULL;
        *cab = p;
        
        cpf = 1000000;
    }
    else
    {
        Cliente * atual = *cab;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = p;
        p->ant = atual;
        cpf = cpf + 1 ;
        
    }
}

void printar_cliente(int n,Cliente * p)
{
    
    if(!n)
    {
        while(p != NULL)
        {
            printf("\n");
            Puts("<---------------------------------------------->");
            printf("cpf: %d\n", p->cpf);
            printf("Nome: %s\n", p->nome);
            printf("telefone: %s\n", p->telefone);
            printf("Descrição: %s\n", p->email);
            Puts("<---------------------------------------------->");
            printf("\n");
            p = p->prox;
        }
    }
    else
    {
        while(p != NULL)
        {
            if(p->cpf == n)
            {
                printf("\n");
                Puts("<---------------------------------------------->");
                printf("cpf: %d\n", p->cpf);
                printf("Nome: %s\n", p->nome);
                printf("telefone: %s\n", p->telefone);
                printf("Descrição: %s\n", p->email);
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

