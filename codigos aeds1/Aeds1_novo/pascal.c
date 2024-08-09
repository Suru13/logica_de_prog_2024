

#include <stdio.h>
#include <stdlib.h>


//void recebval(int f);
int pascal(int i,int j);
void imp(int numlinh);



int main()
{
    int valor;

    printf("Digite um valor: ");

    scanf("%d",&valor);

    imp(valor);

    return 0;
}

int pascal (int i,int j)
{

    if (j==1 || i==j)
        return 1;
    return ( pascal(i-1,j) + pascal(i-1,j)); 
    
}

void imp(int numlinh)
{
    for (int  i = 1; i <=numlinh; i++)
    {

        for (int j=1; j<=i; j++)
        {
            printf("%d ",pascal(i,j));
        }
        printf("\n");
        
    }
    
}
