
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

    int soma = 0;
    while(n!=0){
        soma+=n%10;
        n/=10;
    }
    return soma;
}

void imprimeSom(int n){
    printf("A soma de %d -> %d", n,somadignum(n));
}
