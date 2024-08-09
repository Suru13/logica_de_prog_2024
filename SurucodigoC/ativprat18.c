
#include <stdio.h>

int media(int n);
int quadrado(int n);
int soma(int a, int b);
int subs(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int mod(int a, int b);
void menu ();



int main()
{
    int escolha,n,valor1,valor2;
    menu();
    puts("Informe sua escolha");
    scanf("%d",&escolha);
    switch (escolha)
    {
    case /* constant-expression */1:
        /* code *///int n;
        puts("informe um numero:");
        scanf("%d", &n);
        printf("Quadrado de %d -> %d\n",n,quadrado(n));
        break;

    case 2:
        //int n;
        puts("informe a quatidade de numero:");
        scanf("%d", &n);
        printf("A media -> %d\n",media(n));
        break;

    case 3:
         //int valor1,valor2;
         puts("Informe valor1:");
         scanf("%d",&valor1);
         puts("Informe valor2:");
         scanf("%d",&valor2);
         printf("A soma -> %d",soma(valor1,valor2));
         break;
    
    case 4: 
         //int valor1,valor2;
         puts("Informe valor1:");
         scanf("%d",&valor1);
         puts("Informe valor2:");
         scanf("%d",&valor2);
         printf("A soma -> %d",subs(valor1,valor2));
         break;
        
    case 5:
         //int valor1,valor2;
         puts("Informe valor1:");
         scanf("%d",&valor1);
         puts("Informe valor2:");
         scanf("%d",&valor2);
         printf("O resultado -> %d",div(valor1,valor2));
         break;

    case 6:
         //int valor1,valor2;
         puts("Informe valor1:");
         scanf("%d",&valor1);
         puts("Informe valor2:");
         scanf("%d",&valor2);
         printf("O resultado -> %d\n",mult(valor1,valor2));
         break;

     case 7:
         //int valor1,valor2;
         puts("Informe valor1:");
         scanf("%d",&valor1);
         puts("Informe valor2:");
         scanf("%d",&valor2);
         printf("O resto -> %d\n",mod(valor1,valor2));
         break;

    case 0:
         break;
    }

    
    return 0;
}
int media(int n)
{
    int num;
    int total=0;
    for (int i = 0; i < n; i++)
    {
        printf("Informe o valor%d: \n",i+1);
        scanf("%d",&num);
        total+=num;
        /* code */
    }
    
    return total/n;

}

int quadrado(int n)
{

    return n*n;
}

int soma(int a, int b)
{

    return a+b;

}

int subs(int a, int b)
{

    return a-b;

}

int mult(int a, int b)
{

    return a*b;

}

int div(int a, int b)
{

    return a/b;

}

int mod(int a, int b)
{

    return a % b;

}

void menu ()
{
    puts(" 1 para calacular o quadrado de um numero");
    puts(" 2 para calacular a media de n numeros");
    puts(" 3 para calacular a soma de dois numeros");
    puts(" 4 para calacular a substracao entre dois numeros");
    puts(" 5 para calacular a divisao de dois numeros");
    puts(" 6 para calacular a multiplicacao de dois numeros");
    puts(" 7 para calacular o restoda divisao entre dois numeros");
    puts(" 0 para sair:");
}

