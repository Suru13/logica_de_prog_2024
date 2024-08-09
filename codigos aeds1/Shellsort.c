
#include <stdio.h>
void shellsort (int *v, int n);
void troca(int *v,int p,int m);

int main()
{
    int n;

    puts("Informe o tamanho do vetor a!!!");
    scanf("%d", &n);

    int  a[n];
    for(int i =0; i< n; i++)
    {
        printf("informe o valor a[%d] do vetor a -> ",i);
        scanf("%d",&a[i]);
    }

    shellsort(a,n);
    printf(" vetor a[] ordenado: ");
    for (int k = 0; k < (n - 1); k++)
    
       printf(" %d ->", a[k]);

    printf(" %d", a[n-1]);
    
    return 0;
}

void shellsort (int *v, int n)
{

   int i,j,pulo,k;

   pulo= n/2;
   for ( k = pulo;  k > 0 ;k/=2)

     {

        for(i=k ; i < n ; i++)
        {
           j = i ;

           while ((k <= j) && (v[j] < v[j-k]))

          {

            troca(v,j,j-k);
            j = j-k;

          }

        }
        //k = k/2;
    }

}

void troca(int *v,int p,int m )
{
    int aux = v[p];
    v[p]    = v[m];
    v[m]    = aux;

}
