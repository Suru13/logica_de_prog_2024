programa{


  funcao inicio() {

    inteiro var, totalVotosx = 0, totalVotosy = 0, totalVotosb= 0, totalVotos=0
    real px = 0, py=0 , pb =0

    faca{

    
    escreva("1-Candidao - X\n")
    escreva("2-Candidao - Y\n")
    escreva("3-Branco \n")
    escreva("0-Encerrar Votação - X\n")
    escreva("Digite a sua escolha:\n")
    leia(var)
    escolha(var){
           caso 1:
                  escreva("Candidato X escolido\n")
                  totalVotosx++

           caso 2:
                  escreva("Candidato Y escolido\n")
                  totalVotosy++

           caso 3: 
                  escreva("Voto em Branco\n")
                  totalVotosb++
           caso 0:
                  totalVotos = totalVotosx + totalVotosy + totalVotosb
                  px = totalVotosx / totalVotos
                  py = totalVotosy / totalVotos
                  pb = totalVotosb / totalVotos
                  escreva("Total de votos:\n",totalVotos)
                  escreva("Candidato X: ",totalVotosx,"voto (s)",px,"% do total\n")
                  escreva("Candidato Y: ",totalVotosy,"voto (s)",py,"% do total\n")
                  escreva("Branco: ",totalVotosb,"voto (s)",pb,"% do total\n")
                  escreva("Nulo: ",totalVotosb,"voto (s)",pb,"% do total\n")
                  escreva("\n")
      
                  
           caso contrario:
                          escreva("Voto em Branco\n")
                          totalVotosb++                    
    }
    
   }enquanto(var!=0)

 }

}
