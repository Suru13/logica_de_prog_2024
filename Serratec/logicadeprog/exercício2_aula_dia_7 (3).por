

programa {


  funcao inicio() {

    real varHamb, varCheesb, varFritas, varRef, varMilks,soma
    varHamb    = 3.00
    varCheesb  = 2.50
    varFritas  = 2.50
    varRef     = 1.00
    varMilks   = 3.00
    soma       = 0.00

    inteiro var,qH,qC,qF,qR,qM
    qH = 0 
    qC = 0
    qF = 0
    qR = 0
    qM = 0

    faca{
      escreva("Abaixo está exibido nosso cardápio!!!\n")
      escreva("\n\t1- Hambúrguer...............R$ 3,00\n")
      escreva("\t2- Cheeseburguer............R$ 2,50\n")
      escreva("\t3- Fritas...................R$ 2,50\n")
      escreva("\t4- Refrigerante.............R$ 1,00\n")
      escreva("\t5- Milkshake................R$ 3,00\n")
      escreva("\t0- Sair\n")

      escreva("\nInforme a sua escolha: ")
      leia(var)
      escolha(var){
                 caso 1: 
                        escreva("Você escolheu Hambúrguer!\n")
                        //soma+=varHamb
                        qH+=1
                 pare
                 caso 2: 
                        escreva("Você escolheu Cheeseburguer!!\n")
                        //soma+=varCheesb
                        qC+=1
                 pare
                 caso 3: 
                        escreva("Você escolheu Fritas!!!\n")
                        //soma+=varFritas
                        qF+=1
                 pare
                 caso 4: 
                        escreva("Você escolheu Refrigerante!!!!\n")
                        //soma+=varRef
                        qR+=1
                 pare
                 caso 5: 
                        escreva("Você escolheu Milkshake!!!!!\n")
                        qM+=1
                 pare
                 caso 0: 
                        escreva("\nVocê deseja sair!!!!!\n")
                 pare
                        
      }
    }enquanto(var!=0)


    soma =( (qH*varHamb) + (qC*varCheesb)+ (qF*varFritas)+(qR*varRef)+(qM*varMilks))

    escreva("Você consumiu: \n")
    escreva("Hambúrguer:     0",qH,"\n")
    escreva("Cheeseburguer:  0",qC,"\n")
    escreva("Fritas:         0",qF,"\n")
    escreva("Refrigerante:   0",qR,"\n")
    escreva("Milkshake:      0",qM,"\n")
    escreva("Total da conta: R$ ",soma,"0\n")
    escreva("\nObrigado pela sua compra volte sempre!!! \n")
    
    
  }
}
