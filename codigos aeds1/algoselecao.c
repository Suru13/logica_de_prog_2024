
#include <stdio.h>
void selecao (int *v, int n);
void troca(int *v,int i,int m);

int main()
{
    int a[5]= {2,10,11,15,16};
    selecao(a,5);
    printf("A ordenado -> ");
    for (int i = 0; i < 5; i++)
 {
    printf(" %d ->", a[i]);
 }
    return 0;
}

void selecao (int *v, int n)
{
    int i,j;
    int m ;
 for ( i = 0; i < n-1; i++)
  {
    m = i;
    for ( j = i+1; j < n; j++)
    {
        if (v[i]< v[m])
            m=j;
    }
  }
 troca(v,i,m);
}

void troca(int *v, int i ,int m)
{
    int aux = v[i];
    v[i] = v[m];
    v[m] = aux;
}