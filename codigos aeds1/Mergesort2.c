

#include <stdio.h>
void mergeII (int *v1, int e1, int e2,int d1,int d2, int *v2);
void sort(int *v1, int e, int d,int *v2);
//void troca(int *v,int i,int m);

int main()
{
    int p;
    puts("informe o tamanho de a e de b: ");
    scanf("%d",&p);
    
    int  a[p];
    int  b[p];
    int c=0;
  
    for(int i = 0 ; i < p ; i++)
    {

      printf("Informe o valor a[%d]: ",i);
      scanf("%d", &a[i]);
    } 
    
    sort(a,c,p,b);
    for (int i = 0; i < p; i++){
      a[i] = b[i];
    }
    printf("A ordenacao -> ");

    for (int k = 0; k < p  ; k++)
    {

      printf(" %d ->", a[k]);

    }
   
    return 0;
}

void mergeII (int *v1, int e1, int d1,int e2,int d2, int *v2)
{
  int i,j,k;
  i = e1;
  j = e2;
  k = 0;

  while (i <= d1 && j <= d2)
  {
    
     if ( v1[i] <= v1[j])
     {
       v2[k] = v1[i];
       i++;
     }
     else    
      {
        v2[k] = v1[j];
        j++;
     }
     k++;
     
  }

  while(i < d1)
  {
    v2[k] = v1[i];
    i++;
    k++;
    
  }

  while(j <= d2)
  {
   
    v2[k] = v1[j];
    j++;
    k++;
   
  }

}

void sort(int *v1, int e, int d,int *v2)
{
     int m; 
     m = ((e+d)/2);
     if(e < d )
     {
       sort(v1,e,m,v2);
       sort(v1,m+1,d,v2);
       mergeII(v1,e,m,m+1,d,v2);
       
     }  

}
