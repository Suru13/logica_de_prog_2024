programa
{
	
	funcao inicio()
	{
	     inteiro esc,countnome,countvalor
	     countnome  = 0
	     countvalor = 1
	     real valor[50],totalval
	     totalval = 0.0
	     cadeia nomeconv[50]
		faca{
			Menu()
			leia(esc)
			escolha(esc){
				       caso 1:
				              escreva("\nInsere o nome: ")
				              se(nomeconv[countnome]=="")
				              {
				                  leia(nomeconv[countnome])
				                  countnome++
				                  escreva("\nNome inserido com sucesso\n")
				              //limpa()
				              }senao{
				              	      escreva("\n Já tem um nome nesta posição da lista dos convidados!!! \n")
				              	
				              }
				       pare

				       caso 2:
				              escreva("\nLista dos convidados: \n")
				              para(inteiro i = 0; i < 50; i++){
				              	    escreva(i+1," ---> ",nomeconv[i],"\n")
				              }
				              //limpa()
				       pare


				       caso 3:
				              cadeia nome
				              escreva("\nInsere o nome do convidado\n")
				              leia(nome)
				              para(inteiro i = 0; i < 50; i++){
				              	    se (nomeconv[i]==nome){
				              	    	   nomeconv[i] =""
				              	    	   escreva("\n Convidado apagado com sucesso\n")
				              	    }senao{
				              	    	
				              	    	    se(i==49){
				              	    	    	        escreva("\n Convidado não encontrado \n")
				              	    	    }
				              	    	    
				              	    }
				              }
	
				       pare

				       caso 4:
				              escreva("\nPagamento\n")

				              totalval =  120.00 * countvalor
				              
				              
				              escreva("\nPagamento realizado com sucesso\n")
				              
				              escreva("\n\tTotal valor pago ----> ",totalval,"\n")
				              countvalor+=1
				       pare
				              
				       caso 0:
				               escreva("\n Operação finalizada !!!\n")
				               
				       pare
				
			}
		}enquanto(esc!=0)
		limpa()
	}
	
	funcao Menu(){
		
		escreva("\n\t MENU DE OPÇÕES: \n")
		escreva("\t 1- Inserir nome: \n")
		escreva("\t 2- Listar convidados: \n")
		escreva("\t 3- Remover nome: \n")
		escreva("\t 4- Pagamento: \n")
		escreva("\t 0- Sair \n")
		escreva("\t Digite a opção: ")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1617; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */