
#include <stdio.h>

struct termo
{
    int coef;
    int grau;
};
typedef struct termo Termo;


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


    printf("A ordenacao -> ");
    for (int k = 0; k < (p - 1) ; k++)
   
        printf(" %d ->", a[k]);

    printf("%d",a[(p-1)]);
    return 0;
}