
#include <stdio.h>
#include <stdlib.h>


//Os produtos possuem ID, nome, descri¸c˜ao, pre¸co e categoria
// Define a struct Produto
typedef struct _prod {
    int id;
    double preco;
    char categoria[50];
    char nome[100];
    char descricao[200];
    struct _prod* prox;
    struct _prod* ant;
} Produto;

Produto* cria_lista();
Produto* alocar();
int gid();
void add();
void remover(int id,Produto ** cab);
void edit(int id, Produto **cab);
void liberar(Produto * p);
void printp(int n,Produto * p);
void draw();