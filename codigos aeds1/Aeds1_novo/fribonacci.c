


#include <stdio.h>
#include <stdlib.h>


//void recebval(int f);
int fib(int n);



int main()
{
    int valor;

    printf("Digite um valor: ");

    scanf("%d",&valor);

    printf("Fribonacci de %d -> %d\n", valor,fib(valor));

    return 0;
}

int fib (int n)
{

    if (n==1 || n==2)
        return 1;

    return ( fib(n-1) +  fib(n-2)); 
    
}

/*void recebval(int f)
{
    printf("Digite um valor:");
    scanf("%d",&f);
}*/
