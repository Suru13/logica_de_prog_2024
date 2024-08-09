
#include <stdio.h>

int main()
{
    int n;
    puts("Digite o numero desejado: "); 
    scanf("%d", &n);

    int menor, maior;
    menor = n;
    maior=n;

    while(n>0)
    {
        if(n > maior)
        {
            maior = n ;
        }
        if(n< menor){
            menor =n;
        }
        puts("Digite o numero desejado: "); 
        scanf("%d", &n);


    }
    printf("Maior -> %d\n", maior);
    printf("Menor -> %d\n", menor);
    return 0;
}