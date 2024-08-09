

#include <stdio.h>

void troca(int *v, int i ,int m);
void criaheap(int *v,int i,int n);
void heapmax(int *v,int n);
void sobheap (int *v, int i);
void desceheap (int *v, int i,int m);
void criaheapd(int *v,int i,int n);
//void troca(int *v,int i,int m);

int main()
{
    int p;
    puts("informe o tamanho de a: ");
    scanf("%d",&p);
    
    int  a[p];

    for(int i = 0 ; i < p ; i++)
    {
        printf("Informe o valor a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    heapsort(a,0,5);

    printf("A ordenacao -> ");
    for (int k = 0; k < (p - 1) ; k++)
   
        printf(" %d ->", a[k]);

    printf("%d",a[(p-1)]);
    return 0;
}

void criaheap(int *v,int i,int n)
{
    for( i = 2; i<=n ; i++ )
    {
        sobheap(v,i);
    }

}

void heapmax(int *v,int n)
{
    int i,pai, fe,fd,k;
    i = 1;
    pai = i/2;
    fe =  (2*i);
    fd = (2*i) +1;
   
    for( ;i < n ; i++)
    {
       
        if(v[pai] > v[fe] && v[pai] > v[fd])
        {
            pai = fe;
        }
        else 
        {
            troca(v,pai,fe);
        }

    }

}

void sobheap (int *v, int i)
{
   int pos;
   pos = v[i];
  // v[0]= pos;
   while(v[i/2] < pos)
   {
    v[i] = v[i/2];
    i = i/2;
   }

   v[i]= pos;
}

void desceheap (int *v, int i,int m)
{
   int pos,sfilho,j;
   pos = v[i];
   
   sfilho = ( i<= m/2);
   
   while(sfilho)
   {
    j = 2*i; 
    if((j < m ) && (v[j]< v[j+1]))

        j++;
    if(pos >= v[j])
    
        sfilho=0;
    else
    {
        v[i] = v[j];
        i = j;
        sfilho = (i<= m/2);
    }
       
   }

   v[i]= pos;
}

void criaheapd(int *v,int i,int n)
{
    for( i = n/2; i > 0 ; i-- )
    
        desceheap(v,i,n);

}

void heapsort(int *v,int i,int n)
{
    criaheap(v,i,n);
    for( i =n; i<1 ; i--)
    {
        troca (v,1,i);
        desceheap(v,1,i-1);
    }

}


void troca(int *v, int i ,int m)
{
    int aux = v[i];
    v[i] = v[m];
    v[m] = aux;
}


