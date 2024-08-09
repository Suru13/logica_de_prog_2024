
#include <stdio.h>

int main()
{
    int num_pessoa,idade;
    puts("Informe a idade ou 0 para sair: "); 
    scanf("%d", &idade);
    num_pessoa = 0;

    int menor, maior;
    menor = idade;
    maior=idade;
    int soma=0;

    while(idade > 0)
    {
        if(idade > maior)
        {
            maior = idade ;
        }
        if( idade < menor){
            menor = idade;
        }
        soma+=idade;
        num_pessoa++;
        puts("Informe a idade ou 0 para sair: "); 
        scanf("%d", &idade);

    }
    int id_media = soma/num_pessoa; 
    printf("O numero de pessoas -> %d\n",num_pessoa);
    printf("A idade media do grupo -> %d\n", id_media);
    printf("A idade menor do grupo -> %d\n", menor);
    printf("A idade maior do grupo -> %d\n", maior);
    return 0;
}