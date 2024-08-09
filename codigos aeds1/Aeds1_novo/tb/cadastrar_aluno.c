
#include "cadastrar_aluno.h"


Lista* criar_lista(){

    Lista *nova_lista    = (Lista *)malloc(sizeof(Lista));
    nova_lista->cabeca   = NULL; 
    nova_lista->tam_list = 0;
    return nova_lista;

}

void insert_aluno_lista(Lista * l,char nome [ tam_max],char curso[ tam_max],char ano [tam_maxano],int matricula,double notas [ tam_maxnotas]){

    Alunos* novo_aluno = (Alunos *)malloc(sizeof(Alunos))      ;

    printf("Informe o nome completo do aluno:\n")              ;
    scanf(" %101[^\n]", novo_aluno->nome)                      ;

    printf("Informe o curso do aluno:\n")                      ;
    scanf(" %101[^\n]", novo_aluno->curso)                     ;

    printf("Informe o ano de entrada:\n")                      ;
    scanf(" %5[^\n]", novo_aluno->ano)                         ;

    printf("Informe a matricula do aluno:\n")                  ;
    scanf("%d", novo_aluno->matricula)                         ;

    printf("Informe o nome completo do aluno:\n")              ;
    scanf(" %101[^\n]", novo_aluno->nome)                      ;

    novo_aluno->presenca = 0                                   ;
    novo_aluno->ausenca = 0                                    ;

    *(novo_aluno)->notas = 0                                   ;

    printf("Aluno cadastrado com sucesso!!!\n")                ;


}

void fazer_chamada(Alunos *novo){

    printf("Chamada do aluno:\n")      ;
    char escolha                       ;

    scanf(" %c", escolha)              ;

    switch (escolha)
    {
    case 'p' :

        ++novo->presenca               ;
        break                          ;

    case 'P' :

        ++novo->presenca               ;
        break                          ;

    case 'a':

        ++novo->ausenca                ;
        break                          ;

    case 'A':

        ++novo->ausenca                ;
        break                          ;
    
    
    default:
        break                          ;
    }

}


