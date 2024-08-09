#include <stdio.h>
//#include <ncurses.h>
#include <string.h>
#include "Inventrio2Suru.h"



Produto* cria_lista()
{
    return NULL;
}

Produto* alocar()
{
    return (Produto*)malloc(sizeof(Produto));
}


void liberar(Produto* p)
{
    free(p);
    p=NULL;
}
void remover(int id,Produto ** cab){
    Produto * p = *cab;

    if(*cab == NULL){
        printf("Lista Vazia!");
        return;
    }
    while (p != NULL)
    {
        if(p->id == id){
            
            if(p->prox == NULL){
                p->ant->prox = NULL;
            } else{
                p->prox->ant = p->ant;
            }

            if(p->ant == NULL){
                p->prox->ant == NULL;
                *cab = p->prox;
            } else{
                p->ant->prox = p->prox;
            }

            liberar(p);
        }
        p = p->prox;
    }
    if(p == NULL){
        printf("\n ID %d não encontrado\n", id);
    }
    
}

void edit(int id, Produto **cab){
    Produto * p = *cab;
    while (p != NULL )
    {
        if(p->id == id){
            
            printf("Nome: ");
            scanf(" %100[^\n]", p->nome);

            printf("Preço: ");
            scanf("%lf", &p->preco);

            printf("Categoria: ");
            scanf(" %50[^\n]", p->categoria);

            printf("Descrição: ");
            scanf(" %200[^\n]", p->descricao);

            break;
        }
        p = p->prox;
    }
    if(p == NULL){
        printf("\n ID %d não encontrado\n", id);
    }
    
}

void add(Produto ** cab){
    Produto * p = alocar();
    

    printf("Nome: ");
    scanf(" %100[^\n]", p->nome);

    printf("Preço: ");
    scanf("%lf", &p->preco);

    printf("Categoria: ");
    scanf(" %50[^\n]", p->categoria);

    printf("Descrição: ");
    scanf(" %200[^\n]", p->descricao);

    if(*cab == NULL){
        p->ant = NULL;
        *cab = p;
        p->id = 10000;
    }else{
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

void printp(int n,Produto * p){
    
    if(n == 1){
        while(p != NULL){
            printf("\n");
            printf("ID: %d\n", p->id);
            printf("Nome: %s\n", p->nome);
            printf("Categoria: %s\n", p->categoria);
            printf("Preco: %.2f\n", p->preco);
            printf("Descrição: %s\n", p->descricao);
            printf("\n");
            p = p->prox;
        }
    }else{
        while(p != NULL){
            if(p->id == n){
                printf("\n");
                printf("ID: %d\n", p->id);
                printf("Nome: %s\n", p->nome);
                printf("Categoria: %s\n", p->categoria);
                printf("Preco: %.2f\n", p->preco);
                printf("Descrição: %s\n", p->descricao);
                printf("\n");
                break;
            }else{
                p = p->prox;
            }
        }
    }
}

/*void draw(){
    
    int c = KEY_UP;
    int xMax,yMax;
    int seta = 0;
    getmaxyx(stdscr, yMax, xMax);
    while(c != 10){
    mvprintw((yMax/2) - 6, (xMax/2)- 9 ,"GERENCIAR PRODUTOS");
    mvprintw((yMax/2) - 4, (xMax/2)- 9 ,"BUSCA DE PRODUTOS");
    mvprintw((yMax/2) - 2, (xMax/2)- 10 ,"CADASTRO DE CLIENTES");
    mvprintw((yMax/2) , (xMax/2)- 10 ,"CARRINHO DE COMPRAS");
    mvprintw((yMax/2) + 2, (xMax/2)- 10 ,"EXPORT/IMPORT DADOS");
    mvprintw((yMax/2) + 8, (xMax/2)- 2 ,"SAIR");

    for(int i = 0; i < 6; i++){
        if(i == seta) attron(A_REVERSE);
        if(i == 0) mvprintw((yMax/2) - 6, (xMax/2)- 9 ,"GERENCIAR PRODUTOS");
        if(i == 1) mvprintw((yMax/2) - 4, (xMax/2)- 9 ,"BUSCA DE PRODUTOS");
        if(i == 2) mvprintw((yMax/2) - 2, (xMax/2)- 10 ,"CADASTRO DE CLIENTES");
        if(i == 3) mvprintw((yMax/2) , (xMax/2)- 10 ,"CARRINHO DE COMPRAS");
        if(i == 4) mvprintw((yMax/2) + 2, (xMax/2)- 10 ,"EXPORT/IMPORT DADOS");
        if(i == 5) mvprintw((yMax/2) + 8, (xMax/2)- 2 ,"SAIR");
        if(i == seta) attroff(A_REVERSE);
    }

    c = getch();
    switch (c){
    case KEY_UP:
        seta--;
        if(seta < 0) seta = 0;
        break;
    case KEY_DOWN:
        seta++;
        if(seta > 5) seta = 5;
        break;
    default:
        break;
    }
    
    if(c == 10  && seta == 0){
        printw("\nGERENCIADOR DE PRODUTOS\n");
        break;
    }else if(c == 10  && seta == 1){
        printw("\nBUSCA DE PRODUTOS\n");
        break;
    }else if(c == 10  && seta == 2){
        printw("\nCADASTRO DE CLIENTES\n");
        break;
    }else if(c == 10  && seta == 3){
        printw("\nCARRINHO DE COMPRAS\n");
        break;
    }else if(c == 10  && seta == 4){
        printw("\nEXPORT/IMPORT DADOS\n");
        break;
    }else if(c == 10  && seta == 5){
        printw("\nSAIR\n");
        break;
    }

    refresh();
    //c = getch();
    }
}*/