

#include <stdio.h>
#include <stdlib.h>


//void recebval(int f);


int buscabin(int inicio,int *vetor,int elm,int fim);

int main()
{
    int valor[] = {1,2,3,4,5,6,7,8,9};
    int retorno = buscabin(0,valor,10,9);


   
    printf("Valor[%d] -> meio %d\n",valor[retorno],retorno);

    return 0;
}

int buscabin(int inicio,int *vetor,int elm,int fim){
      
    int meio = (fim  + inicio)/2;

    if(vetor[meio] == elm) 
        return meio;
  
    if(inicio >=fim)   
         return -1;

  

    if(vetor[meio] < elm)  
        return buscabin(meio + 1, vetor,elm,fim);

    
    if(vetor[meio] > elm)  
         return buscabin(inicio, vetor,elm, meio-1);
    
}