#include <stdio.h>
#include <stdlib.h>

int is_alfabet(char c);
int isAlpha(char *s);
int isAlpha2(char *s);
void encodeStr (char *s, int key);
void decodeStr(char *s, int k);


int main()
{
    
    /* code 
    printf("Resultado da funcao 1: %d\n", isAlpha("Oi testando"));
    printf("Resultado da funcao 2: %d\n", isAlpha2("Oi testando"));
    printf("key 1 -> %d\n",generateKey());
    printf("key 2 -> %d\n",generateKey2());*/

    char word[] = "ENGENHARIA";
    int key = generateKey2();
 
    printf("\nWord: %s", word);
 
   if (isAlpha(word)) 
   {
   encodeStr(word, key);
 
   printf("\nKey: %d", key);
   printf("\nEncoded: %s", word);
 
   decodeStr(word, key);
 
   printf("\nDecoded: %s", word);
   }
    return 0;
}

int isAlpha(char *s){
    int n = 0; 
    while(s[n]!='\0'){
        if(s[n] <= 'a' && s[n] >= 'z'){
            return 0;
        }
        n++;
    }
    return 1; 
}

isAlpha2(char *s){
    int res; 
    for(int i = 0; s[i]!='\0'; ++i){
        res = (s[i]<= ('a'||'A') && s[i]>= ('Z'||'z')? 0 : 1 ) ;
    }
    return res; 
}


int generateKey2()
{
    srand(time(NULL));
    
    return  rand() %127 +1 ;
}

void encodeStr (char *s, int key)
{
    for (int i = 0;s[i] != '\0'; i++)
    {
        if (isAlpha2(s[i]))
        {
            s[i]+=key;
        }
        
    }
    
}

void decodeStr(char *s, int k)
{
    for (int i = 0;s[i] != '\0'; i++)
    {
        if (isAlpha2(s[i]))
        {
            s[i]+=k;
        }
        
    }
}

