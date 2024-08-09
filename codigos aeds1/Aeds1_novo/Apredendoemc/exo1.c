
#include <stdio.h>
#include <stdlib.h>
#define tam 101

/*
O intuito :
Criar um programa que leia o nome e a idade de uma pessoa e depois os imprima.
*/
int main()
{
    //declarando variaveis
    char nome[tam];
    int idade;
    puts("Informe o nome da pessoa:");
    scanf("%s",nome);
    puts("Informe a idade da pessoa:");
    scanf("%d",&idade);
    printf("\n Nome: %s \n Idade: %d\n",nome, idade);

    return 0;
}