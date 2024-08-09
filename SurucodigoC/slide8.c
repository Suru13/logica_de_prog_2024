
#include <stdio.h>
#include <string.h>

int main()
{
    int tamanho1, tamanho2;

    puts("Informe o tamanho da string 1 e 2:");
    scanf("%d%d",&tamanho1,&tamanho2);

    char s1[tamanho1+1],s2[tamanho2+1];

    puts("Digite o que deseja na string1: "); 
    scanf("%s", s1);
   // gets(s1);

    puts("Digite o que deseja na string2: ");
    //gets(s2);
    scanf("%s", s2);

    strcat(s1,s2);
    printf("String1 -> %s String2 -> %s\n",s1,s2);
    
    int comp = strcmp(s1,s2);

    printf("A comparacao deu -> %d",comp);

    //int tamanho_atual = strlen(s1);

    return 0;
}