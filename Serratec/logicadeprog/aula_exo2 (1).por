

programa {


  funcao inicio() {

    inteiro numroPessoas,idade , totalMaior = 0, totalMenor=0, totalIdade=0
    escreva("Digite o n° de pessoas que deseja cadastrar")
    leia(numroPessoas)
    para(inteiro i=0;i< numroPessoas;i++){
         escreva("Digite a sua idade")
         leia(idade)
         totalIdade+=idade

         se(idade>=18){
          totalMaior++

         }senao{
          totalMenor++
         }

    }
    escreva("Total de pessoas maior de 18:", totalMaior,"\n")
    escreva("Total de pessoas maior de 18:", totalMenor,"\n")
    escreva("Total de pessoas maior de 18:", totalMaior+totalMenor,"\n")
  }
}
