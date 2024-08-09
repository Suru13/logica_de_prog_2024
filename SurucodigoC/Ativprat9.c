
#include <stdio.h>

int main()
{
    int valor;

    puts("Digite um valor: ");

    scanf(" %d", &valor);

    if(valor % 6 == 0)
         printf(" %d e divisivel por 2 e por 3\n", valor);
    else
         printf(" %d nao e divisivel por 2 e por 3\n", valor);
    return 0;
}
