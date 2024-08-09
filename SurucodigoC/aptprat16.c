
#include <stdio.h>


int main()
{
    int x,y;
    puts("Informe x:");
    scanf("%d",&x);
    puts("Informe y:");
    scanf("%d",&y);
    int soma=0;
    int mult = 1;

    if (x < y)
    {
        for (int i = x; i <= y; i+=2)
        {
            soma+=i;
            /* code */
        }
        for (int i = x; i <= y; i+=2)
        {
            mult*=i;
            /* code */
        }
        
        printf("Soma  -> %d e a Multiplicaco é -> %d\n",soma,mult);
        /* code */
    }
    else

         puts("Digite x < y");
    
    return 0;
}