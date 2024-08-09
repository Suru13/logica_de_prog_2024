
#include <stdio.h>

int main()
{
    int n,num;
    int soma = 0;

    
    puts("Informe o quantos numeros quer somar:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Informe o numero%d:",i+1);
        scanf("%d", &num);
        soma+=num;

        /* code */
    }
    printf("Soma e -> %d \n",soma);
    
    return 0;
}