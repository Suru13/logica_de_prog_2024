
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define pos 10
/*
Index Valor Histograma
[0]    15   ***************
[1]     3   ***
[2]    11   ***********
[3]    5    *****
[4]    2    **
*/

int generateKey(int a,int b);
void histograma(int s[], int tam);
void estrelasp(int qdt);

int main()
{
    int vetor[pos];
    
    for (int i =0 ; i< pos; i++)
    {
       vetor[i]= generateKey(1,20);

    }
    histograma(vetor,pos);

    return 0;
}

int generateKey(int a,int b)
{
    //srand(time(NULL));
    
    return  a + rand() % b  ;
}

void estrelasp(int qdt)
{
    int count =0;
    while (count<qdt)
    {
        printf("*");
        count++;
    }
    printf("\n");
    

}

void histograma(int s[], int tam)
{
    printf("Index\tValor\tHistograma\n");
    for (int  i = 0; i < tam; i++)
    {
        printf("[%d]\t%02d\t",i,s[i]);
        estrelasp(s[i]);
    }
}