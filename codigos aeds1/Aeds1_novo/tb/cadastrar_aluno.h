
#ifndef CADASTRAR_ALUNO_H
#define CADASTRAR_ALUNO_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define tam_max 101
#define tam_maxano 5
#define tam_maxnotas 20
#define tam_maxpresenca 2



typedef struct aluno{
    char   nome      [tam_max]             ;
    char   curso     [tam_max]             ;
    char   ano       [tam_maxano]          ; 
    char presenca    [tam_maxpresenca]     ;
    int    matricula                       ;
    double notas     [tam_maxnotas]        ;
    struct aluno* prox                     ;
    struct aluno* ant                      ;

}Alunos                                    ;

typedef struct lista{
    Alunos* cabeca                         ;
    int tam_list                           ;
}Lista                                     ;


Lista* criar_lista()                       ;

void insert_aluno_lista(Lista * l,
char nome [ tam_max],
char curso[ tam_max],
char ano [tam_maxano],
int matricula,
double notas [ tam_maxnotas])              ;

#endif
