programa{


  funcao inicio() {

    inteiro var, totalVotosx, totalVotosy, totalVotosb, totalVotos

    totalVotosx = 0
    totalVotosy = 0
    totalVotosb = 0
    totalVotos  = 0

    real  px, py , pb

    px = 0.0
    py = 0.0
    pb = 0.0
    
    faca{
    
    
    escreva("Escolha seu candidato ou tecle zero para encerrar\n\n")
    escreva("\t1 -> Candidato A \n")
    escreva("\t2 -> Candidato B \n")
    escreva("\t3 -> Branco \n")
    escreva("\t0 -> Encerrar Votação \n")
    escreva("\nQualquer número diferente de 0, 1, 2 e 3 anulará seu voto \n")
    escreva("Digite seu voto:\n")
    leia(var)
    escolha(var){
           caso 1:
                  escreva("Candidato X escolido\n")
                  totalVotosx+=1
           pare

           caso 2:
                  escreva("Candidato Y escolido\n")
                  totalVotosy+=1
           pare

           caso 3: 
                  escreva("Voto em Branco\n")
                  totalVotosb+=1
           pare
             
           caso contrario:
                          escreva("Voto em Branco\n")
                          totalVotosb+=1
           pare 

           caso 0:
                  escreva("\nVotação encerrada!\n")

           pare                
    }
    
   }enquanto(var!=0)

    totalVotos = totalVotosx + totalVotosy + totalVotosb
    px = (totalVotosx / totalVotos) * 100
    py = ( totalVotosy / totalVotos) * 100
    pb = (totalVotosb / totalVotos) * 100
    escreva("\nTotal de votos: ",totalVotos,"\n\n")
    escreva("Candidato A: ",totalVotosx," voto (s). ", px," % do total \n")
    escreva("Candidato B: ",totalVotosy," voto (s). ", py," % do total \n")
    escreva("Brancos: ",totalVotosb," voto (s). ", pb," % do total \n")
    escreva("Nulos: ",totalVotosb," voto (s). ", pb," % do total \n")
    escreva("\nObrigado pela sua partcicipação\n")
              
 }

}
