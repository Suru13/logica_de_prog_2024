
#include <stdio.h>
#include <stdlib.h>

void troca (int* vet,int i, int j);


int main()
{
   
    return 0;
}



void troca (int* vet,int i, int j){
    int tmp = vet[i];
    vet[i] = vet[j];
    vet[j] = tmp;
}


