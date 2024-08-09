
#include "busca_prod.h"

Produto * busca(char *nome,char *categoria,double preco,Produto **cab)
{ 
    Produto *novo_pro = *cab;
    while(novo_pro != NULL)
    {
        if((strncmp(nome,novo_pro->nome,51)==0)|| (strncmp(categoria,novo_pro->categoria,51)==0) || (preco == novo_pro->preco))
        {
            return novo_pro;

        }
        novo_pro = novo_pro->prox;
    }

}