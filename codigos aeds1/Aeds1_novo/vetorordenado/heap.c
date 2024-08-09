
#include <stdio.h>
#include <stdlib.h>



int pai(int n);
int fleft(int n);
int fright(int n);
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

int pai(int n){
    if(n > 0 )
        return n/2;
    
}

int fleft(int n){
    if(n > 0 )
        return n*2;
    
}

int fright(int n){
    if(n > 0 )
        return (n*2 +1);
}

void heap_max( int *v, int n){

}
