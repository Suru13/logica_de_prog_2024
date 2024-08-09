
#include <stdio.h>
void merge (int *v1, int *v2,int n,int m, int *v3);
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

void merge (int *v1, int *v2, int n, int m, int *v3)
{
    int i,j,k;
    i = 0;
    j = 0;
    k = 0;
   
    while (i < n && j <  m )
    {
     
       if( v1[i] <= v2[j])
       {
           v3[k] = v1[i];
           i++;      
       }
       else
       {
           v3[k] = v2[j];
           j++;         
       }
       k++;
    }
    while (i < n )
    {
        v3[k] = v1 [i];
        i++;
        k++;
    }
     while (i < n )
    {
        v3[k] = v2 [j];
        j++;
        k++;
    }
    
}

void sort (int *v, int e, int d)
{
    int m;
    if(d > e)
    {
        m = (e+d)/2;
    }
    sort(v,e,m);
    sort(v,m+1,d);
    merge(v,e,m,m+1,d);
}

   
   
