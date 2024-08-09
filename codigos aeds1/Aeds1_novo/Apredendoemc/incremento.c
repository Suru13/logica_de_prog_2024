
#include <stdio.h>
#include <stdlib.h>


int main()
{
    //declarando variaveis
    int variavel;

    puts("Informe uma variavel:");
    scanf("%d",&variavel);
    //variavel--;
    printf("\n variavel+1: %d \n",--variavel);
    printf("\n variavel: %d \n",++variavel);
    printf("\n variavel+1: %d \n",++variavel);

    return 0;
}