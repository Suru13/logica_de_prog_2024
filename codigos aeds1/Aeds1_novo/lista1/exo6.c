
#include <stdio.h>
#include <stdlib.h>


//void recebval(int f);
void troca(int *v,int inicio,int fim);
void inverteVetor(int *vet,int inicio,int  fim);
void imprime(int *vt, int n);

int main()
{
    int valor[] = {1,2,3,4,5,6,7,8,9};

    inverteVetor(valor,0,8);
    imprime(valor,8);
    

    return 0;
}

void inverteVetor(int *vet,int inicio,int  fim){

    if(inicio >= fim)
        return;

    troca(vet,inicio,fim);
    inverteVetor(vet,inicio+1,fim-1);

}

void troca(int *v,int inicio,int fim){
    int temp = v[inicio];
    v[inicio]=v[fim];
    v[fim] = temp;
}

void imprime(int *vt, int n){
    printf("\n");

    for(int i = 0 ; i <= n ;i++){
        printf("v[%d] -> %d \n",i,vt[i]);
    }
}
