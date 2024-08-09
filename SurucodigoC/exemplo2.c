
#include <stdio.h>
int strelen(char *s);

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
    
    printf("\n%d\n", strelen(string));

    return 0;
}
int strelen(char *s)
{
    char *ptrs = s;
    while(*s!='\0')
          s++;
    return (int) (s-ptrs);
}