
programa {

  funcao inicio() {

    real altura [5]
    inteiro count
    count = 0 

    cadeia nome [5]

    enquanto(count < 5){
      escreva("Informe o nome: \n")
      leia(nome[count])
      escreva("Informe a altura (não pode inserir um valor menor a zero)!!!! \n")
      leia(altura[count])
      se(altura[count] > 0){
        count++
      }senao{
        escreva("Você digitou uma altura menor a zero \n")
      }
      
    }

    para(inteiro i = 0; i < 5 ; i++  ){

      escreva("\n Nome: ",nome[i]," ---> Altura: ",altura[i],"\n")

    }
    
  }
}
