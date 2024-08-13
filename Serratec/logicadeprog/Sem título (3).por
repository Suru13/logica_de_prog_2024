programa {


  funcao inicio() {

    inteiro soma
    soma = 0 

    para (inteiro i = 3; i < 500; i+=3){
      se(soma%2 !=0){
        soma += i 
      }
    }

    escreva("Resultado : ", soma)
  }
}
