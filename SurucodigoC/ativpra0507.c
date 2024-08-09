
#include <stdio.h>

int main()
{
    int n;

    printf("Digite o numero desejado: \n"); 

    scanf("%d", &n);

    for(int i = 2; i<=n; i+=2)
    { 
        printf("%d\n", i);
    }
       
    return 0; 
}
