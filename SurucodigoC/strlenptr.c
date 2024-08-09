

#include <stdio.h>
#include <string.h>

int strlen1(char *s);
char *strycpy(char * dest,char *orig);
char *strrchr(char *str,char ch);


int main()
{
    char string[50];
    char string1[50];
    char c;
    gets(string);
    scanf(" %c", &c);
    printf("%s -> tam -> %d\n",string,strlen1(string));

    printf("%s -> %s\n",string,strycpy(string1,string));

    printf("%c",string,strrchr(string,c));
    return 0;
}

int strlen1(char *s)
{
    char *ptr;
    ptr =s;
    while(*s!='\0')
          s++;
    return (int) (s-ptr);
}

char *strycpy(char * dest,char *orig)
{
    char *temp = dest;
    while(*dest++ = *orig++)
    ;
    return temp;

}

char *strrchr(char *str,char ch)
{
    char *ptr = NULL;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]== ch)
            ptr = &str[i];
            
    }
    return ptr;


    
}