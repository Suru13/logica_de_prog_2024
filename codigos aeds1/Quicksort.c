
#include <stdio.h>
void qksort (int *v1, int e,int d);
int particao(int *v,int e,int d);
void troca(int *v, int i ,int m);
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

    qksort(a,0,p);

    printf("A ordenacao -> ");
    for (int k = 0; k < (p - 1) ; k++)
   
        printf(" %d ->", a[k]);

    printf("%d",a[(p-1)]);
    return 0;
}

void qksort (int *v1, int e,int d)
{
    int pivo;

    if(e < d)
    {
        pivo = particao(v1,e,d);
        qksort(v1,e,pivo);
        qksort(v1,(pivo+1),d);
    }
}

int particao(int *v,int a,int b)
{
    int i,j,pivo;
    i = a;
    j = b;
    pivo = v[((a+b)/2)];

    while(i <= j )
    {
        if(v[i] < pivo )
        {
            i++;
        }

        if(v[j] > pivo )
        {
            j--;
        }

        if(i < j)
        {
            troca(v,i,j);
            i++;
            j--;
        }
        else
        {
            break;
        }
        
    }

    return j;
}

void troca(int *v, int i ,int m)
{
    int aux = v[i];
    v[i] = v[m];
    v[m] = aux;
}


