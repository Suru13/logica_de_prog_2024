
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gerenciar_prod.h"
#include "cadastro_cliente.h"

typedef struct carinho
{
    Produto *prod;
    Cliente *cliente;
    struct carinho* prox;
    struct carinho* ant;
} Carinho;

Carinho* criar_lista_carinho();

Carinho* alocar_carinho();

void inserir_carinho(Carinho ** cab,int id);

void remover_carinho(int id,Carinho ** cab);

void editar_carinho(int id, Carinho **cab);

void liberar_carinho(Carinho * p);

void printar_carinho(int n,Carinho * p);