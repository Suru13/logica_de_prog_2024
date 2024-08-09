
#include <stdio.h>

int main()
{
    int ano;
    puts("Digite um ano: \n");
    scanf("%d",&ano);

    if(((ano % 4 ==0) && !(ano % 100 ==0)) || (ano % 400 ==0)) 
        puts("Ano bissexto\n");
    else
        puts("Ano normal\n");
    
    return 0;
}