


#include <stdio.h>
#include <stdlib.h>
#define linha 3
#define coluna 3

//void zerarvetormatrx(int **vet,int linha ,int coluna);
//int *prod_matrx(int linha,int coluna,int **v1,int **v2);
void imprimematr(int vet[][coluna]);
void imprimir_variavel(int n);

int main()
{
    int vetor[linha][coluna];

    int vet1[][3]={{1,2,3},{3,2,1},{2,1,3}};
    int vet2[][3]={{1,2,3},{0,2,1},{0,0,3}};
    int count = 0;

    for(int i=0; i<linha; i++){

        for(int j=0; j<coluna; j++){


            vetor[i][j] = vet1[i][j] * vet2[i][j];

            count++;

        }
        
    }
   

    imprimematr(vetor);
    imprimir_variavel(count);

    

    return 0;
}

int  detmatrx(int vet[linha][coluna]){
    int det = 0;
     for(int i =0; i< linha; i++ ){
        for(int j=0; j<coluna;j++){
              det +=vet[i][j]=0;
        }
    }
}
/*int *prod_matrx(int linha,int coluna, int **v1,int **v2){


   // int count=0;
    int **mat;
    zerarvetormatrx(mat,linha,coluna);
    for(int i=0; i<linha; i++){

        for(int j=0; j<coluna; j++){


            mat[i][j] = v1[i][j] * v2[i][j];

           // count++;

        }
        
    }
    return *mat;


}*/

void imprimematr(int vet[][coluna]){

    for(int i =0; i < linha; i++ ){
        printf("\nLinha %d : => ",i+1);
        for(int j=0; j<coluna;j++){
            printf(" %d ", vet[i][j]);
        } 
          printf("\n");
    }
    printf("\n");
}

void imprimir_variavel(int n){

     printf("Count => %d \n", n);
}
