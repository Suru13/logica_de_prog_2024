

#include <stdio.h>
#include <stdlib.h>


void imprimeSom(int n);
int somadignum(int n);

int main()
{
    int valor;
    printf("Digite um valor : \n");
    scanf("%d",&valor);
    imprimeSom(valor);

    return 0;
}

int somadignum(int n){
    
    if(n==0)
        
        return 0;
    
    return n%10 +  somadignum(n/10); 
}

void imprimeSom(int n){
    printf("A soma de %d -> %d", n,somadignum(n));
}

