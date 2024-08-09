
#include <stdio.h>

int strlene(char *s);
char *strcpy(char *dest, char *orig);
char *strcat(char *dest, char *orig);
char *strstr(char *str1,char *str2);
char *firstv(char *s);

int main()
{
    char string1[100];
    char string2[100];
    char string3[100];
    printf("Informe a string1: ");
    gets(string1);
    printf("Informe a string3: ");
    gets(string3);
    printf("\n%s\n", strcpy(string2,string1));
    printf("\n%s\n", strcat(string2,string1));
    printf("\n%s\n", strstr(string3,string1));
    printf("\n%c\n", firstv(string3));

  
    return 0;
}

int strlene(char *s)
{
    char *ptrs = s;
    while(*s!='\0')
          s++;
    return (int) (s-ptrs);
}
char *strcpy(char *dest, char *orig)
{
    char *ptrd = dest;
    while(*dest++ = *orig++);
    return ptrd;
}
char *strcat(char *dest, char *orig)
{
    strcpy(dest+strlene(dest),orig);
    return dest;

}
/*
isso também funciona muito bem.
char *strmycat(char *dest, char *orig)
{
    char *ptrd = dest+strlene(dest);
    strcpy(ptrd,orig);
    return dest;
}
*/
char *strchar(char *str,char c)
{
    while(*str!='\0')
    {
        if(*str == c)
           return str;
        else
            str++;
        
    }
    return NULL;
}

char *strstr(char *str1,char *str2)
{
    while(*str2!='\0')
    {
        if(*str1++ == *str2++)
           return str1-1;
    }
    return NULL;
}

char *firstv(char *s)
{
    char *vogais = "aeiou";
    
    while(*s!='\0')
         if(strchar(*vogais++,*s++)!=NULL)
             return *vogais;
    return NULL;
}
