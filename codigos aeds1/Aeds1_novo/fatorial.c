
#include <stdio.h>
#include <stdlib.h>


//void recebval(int f);
int fat(int n);



int main()
{
    int valor;

    printf("Digite um valor: ");

    scanf("%d",&valor);

    printf("Fatorial de %d -> %d\n", valor,fat(valor));

    return 0;
}

int fat (int n)
{

    if (n==0 || n==1)
        return 1;

    return ( n * fat(n-1)); 
    
}

/*void recebval(int f)
{
    printf("Digite um valor:");
    scanf("%d",&f);
}*/
