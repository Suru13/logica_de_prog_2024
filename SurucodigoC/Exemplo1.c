
#include <stdio.h>

int main()
{
    char string[100];
   // char string1[50];
    char *ptr = string;
    printf("Informe a string: ");
    gets(string);

    if (*ptr == '\0')
        return;
    while (*ptr!='\0')
        putchar(*ptr++);
    printf("\n");
    ptr--;
     while (ptr>=string)
        putchar(*ptr--);

    return 0;
}