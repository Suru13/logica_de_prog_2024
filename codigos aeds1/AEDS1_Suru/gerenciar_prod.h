#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto
{
    int id;
    double preco;
    char categoria[51];
    char nome[51];
    char descricao[101];
    struct produto* prox;
    struct produto* ant;
} Produto;

Produto* criar_lista_prod();

Produto* alocar_prod();

void inserir_prod(Produto ** cab,int id);

void remover_prod(int id,Produto ** cab);

void editar_prod(int id, Produto **cab);

void liberar_prod(Produto * p);

void printar_prod(int n,Produto * p);