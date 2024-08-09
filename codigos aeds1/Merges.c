#include <stdio.h>
void merge(int V1[], int V2[], int n, int m, int V3[]);
//void troca(int *v,int i,int m);

int main()
{
    int p,l,m;
    puts("informe o tamanho de a e de b: ");
    scanf("%d%d",&p,&l);
    
    int  a[p];
    int  b[l];
    m = p + l;
    int c[m];

    for(int i = 0 ; i < p ; i++)
    {
        printf("Informe o valor a[%d]: ",i);
        scanf("%d", &a[i]);
    }   

    for(int i = 0 ; i < l ; i++)
    {
        printf("Informe o valor b[%d]: ",i);
        scanf("%d", &b[i]);
    }
    

    merge(a,b,p,l,c);
    printf("A ordenacao -> ");
    for (int k = 0; k < (m - 1) ; k++)
   
        printf(" %d ->", c[k]);

    printf("%d",c[m-1]);
    return 0;
}



void merge(int V1[], int V2[], int n, int m, int V3[])
 {
   int i = 0, j = 0, k = 0;

    while (i < n && j < m) 
    {
       if (V1[i] <= V2[j])
       {
          V3[k] = V1[i];
          i++;
       } 
       else 
       {
         V3[k] = V2[j];
         j++;
       }

       k++;
     }

  // Copia os elementos restantes de V1 para V3

  while (i < n) {
    V3[k] = V1[i];
    i++;
    k++;
  }

  // Copia os elementos restantes de V2 para V3

  while (j < m) {
    V3[k] = V2[j];
    j++;
    k++;
  }
}
