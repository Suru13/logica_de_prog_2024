
#include <stdio.h>
void insercao (int *v, int n);
//void troca(int *v,int i,int m);

int main()
{
    int n;
    puts("Informe o tamanho do vetor ")
    int a[5]= {10,2,11,5,16};
    insercao(a,5);
    printf("A ordenacao -> ");
    for (int i = 0; i < 5-1; i++)
 
         printf(" %d ->", a[i]);
     printf(" %d", a[5-1]);
 
    return 0;
}

void insercao (int *v, int n)
{
    int i,j;
    int m = 0;
  for ( i = 1; i < n; i++)
  {
     m = v[i];
    for( j = i-1; ((j>=0) && (m < v[j])); j--)
    {
        v[j+1] = v[j];
    }
    v[j+1] = m;
  }
 //troca(v,i,m);
}

/*void troca(int *v, int i ,int m)
{
    int aux = v[i];
    v[i] = v[m];
    v[m] = aux;
}*/