
programa {


  funcao inicio() {

    inteiro var, totalVotosx = 0, totalVtosy = 0,totalVotosb= 0, totalVotos=0
    escreva("1-Candidao - X\n")
    escreva("2-Candidao - Y\n")
    escreva("3-Branco \n")
    escreva("0-Encerrar Votação - X\n")
    escreva("Digite a sua escolha:\n")
    leia(var)
    escolha(var){
           caso 1:
                  escreva("Candidato X escolido")
                  totalVotosx++
           para

           caso 2:
                  escreva("Candidato Y escolido")
                  totalVotosx++
           para

           caso 3: 
                  escreva("Voto em Branco")
                  totalVotosb
           para

           caso 0:
                  totalVotos= totalVotosx+totalVtosy+totalVotosb
                  escreva("Total de votos:\n",totalVotos)
                  escreva("Candidato X:\n",totalVotosx)
                  escreva("Candidato Y:\n",totalVtosy)
                  

           caso contrario:
                          escreva("Voto em Branco")
                          totalVotosb++                    
                   
    }
  }

}
