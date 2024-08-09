#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned char opcode; 
	unsigned char operand; 
} instr;

int main() {

	instr prog[256];
	unsigned char memory[256];

	int pc = 0;
	int acc = 0;

    
	FILE * file = fopen("exemplo.bin", "rb");// lendo o arquivo  bin.

	if (file == NULL) {// certificando que arquivo foi encontrado
		printf ("\nNão encontrei o arquivo!\n");
	}

	int i = 0;
     //Lendo o  arquivo bin
	while(feof(file) == 0) {
		prog[i].opcode = getc(file);
		prog[i].operand = getc(file);
		i++;
	}
    
	//Loop com condiçao de parada. isso certifique a leitura do arquivo. Quando pc == i chegamoss ao final do arquivo bin
	while (pc<i){
		switch(prog[pc].opcode) {
			case 0:
				acc = memory[prog[pc].operand];// caso opcode igual a 1 acumulador recebe
				break;
			case 1:
				acc = prog[pc].operand;// caso 0 accumulador recebe valor que está  na posição pc(zéro) da memoria
				break;
			case 2:
				memory[prog[pc].operand] = acc;
				break;
			case 3:
				acc += memory[prog[pc].operand];
				break;
			case 4:
				acc -= memory[prog[pc].operand];
				break;
			case 5:
				acc *= memory[prog[pc].operand];
				break;
			case 6:	
				acc /=  memory[prog[pc].operand];
				break;
			case 7:	
				acc++;
				break;
			case 8:	
				acc--;
				break;
			case 9:	
				acc = acc & memory[prog[pc].operand];
				break;
			case 10:	
				acc = acc | memory[prog[pc].operand];
				break;
			case 11:		
				acc = ~acc;
				break;
			case 12:		
				pc = (prog[pc].operand) >> 1;
				continue;
				break;
			case 13: 	
				if(acc == 0){
					pc = (prog[pc].operand) >> 1;
					continue;
				}
				break; 
			case 14:		
				if(acc != 0){
					pc = (prog[pc].operand) >> 1;
					continue;
				}
				break;
			case 15:	
				if(acc > 0){
					pc = (prog[pc].operand) >> 1;
					continue;
				}	
				break;
			case 16:	
		        	if(acc < 0){
					pc = (prog[pc].operand) >> 1;
					continue;
				}
				break;
			case 17:		
				if(acc >= 0){
					pc = (prog[pc].operand) >> 1;
					continue;
				}
				break;
			case 18:
				if(acc <= 0){
					pc = (prog[pc].operand) >> 1;
					continue;
				}
				break;
			case 19:
				pc = i;
		}
		pc++;
	}

	printf("Valor de ACC: %d\n", acc);
	//printf("Valor de stat: %03d\n", stat);
	fclose(file);	
	return 0;
}
//Alunos: Millena e Suru...
