

#include <stdio.h>
#include <stdlib.h>

//void recebervar(int variavel,int vari);

void imprimir_variavel(int n);
int  mod(int a,int b);

int main()
{
    int var1, var2,var3;
    
    scanf("%d,%d",&var1, &var2);
    //recebervar(var1,var2);
    var3 = mod(var1,var2);
    imprimir_variavel(var3);
    

    return 0;
}

int mod(int a,int b){

    if(b!=0)
        return a;
    else if (a!=0)
         return b;
    else{
        return mod(b,a%b);
    }

}

void imprimir_variavel(int n){

     printf("Resultado => %d \n", n);
}

/*void recebervar(int variavel,int vari){

    scanf("%d,%d",&variavel,&vari);
}*/