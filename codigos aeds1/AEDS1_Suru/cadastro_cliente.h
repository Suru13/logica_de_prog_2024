
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct cliente {
    char cpf[13];
    char telefone[15];
    char nome[51];
    char email[55];
    struct cliente* prox;
    struct cliente* ant;
} Cliente;

Cliente* criar_lista_cliente();

Cliente* alocar_cliente();

void inserir_cliente(Cliente ** cab,char *cpf);

void remover_cliente(char *cpf,Cliente ** cab);

void editar_cliente(char *cpf, Cliente **cab);

void liberar_cliente(Cliente * p);

void printar_cliente(int n,Cliente * p);