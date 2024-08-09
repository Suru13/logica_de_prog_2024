
#include <stdio.h>
#include <stdlib.h>


//void recebval(int f);


int buscabin(int *vetor,int elm,int n);

int main()
{
    int valor[] = {1,2,3,4,5,6,7,8,9};
    int retorno =buscabin(valor,10,9);


   
    printf("Valor[%d] -> meio %d\n",valor[retorno],retorno);

    return 0;
}

int buscabin(int *vetor,int elm,int n){
    int inicio = 0;
    int meio;
    int fim = n-1;
    
    while(inicio<=(fim-1)){
        meio = ((fim - 1) + inicio)/2;
        if(vetor[meio] < elm)  inicio = meio + 1;
        if(vetor[meio] > elm)  fim = meio - 1;
        if(vetor[meio] == elm)  return meio;
    }

    return -1;

}