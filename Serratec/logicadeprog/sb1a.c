

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    unsigned char opcode; 
    unsigned char operand; 
} instr;


int main() {

    instr prog[256];

	//FILE * file = fopen(argv[1], "rb");	
    FILE * file = fopen("exemplo.bin", "rb");	
	if (file == NULL) {
      printf ("\nNão encontrei o arquivo!\n");
    }

    short instrux;																														

	int i = 0;

	while(fread(&instrux,2, 1, file) == 2)  {
		prog[i].opcode = instrux & 0xFF;
        prog[i].operand = instrux >> 8;
       // printf("%.2X %.2X\n", prog[i].opcode, prog[i].operand);
        i++;
	}		
    

	unsigned char memory[256];
	int pc = 0;	
    int acc = 1;																																

	while (pc<=i){

		switch(prog[pc].opcode)
        {
			case 0:																																	
				   acc = memory[prog[pc].operand];
                   pc++;
				   break;
			case 1:																														
				   acc = prog[pc].operand;
                   pc++;
				   break;
            case 2:
                   memory[prog[pc].operand] = acc;
                   pc++;
                   break;
            case 3:
                   acc += memory[prog[pc].operand];
                   pc++;
                   break;
			case 4:	
				   acc -= memory[prog[pc].operand];
				   pc++;
				   break;
			case 5:			
				   acc *= memory[prog[pc].operand];
				   pc++;
				   break;
			case 6:
				   acc /=  memory[prog[pc].operand];
                   pc++;
                   break;
			case 7:																														
				   acc++;
                   pc++;
				   break;
			case 8:	
                   acc--;
				   pc++;
				   break;																																
			case 9:	
                  acc = acc & memory[prog[pc].operand];
				  pc++;
				  break;																																
			case 10:
                  acc = acc | memory[prog[pc].operand];
				  pc++;
				  break;
			case 11:		
                  acc = ~acc;
				  pc++;
				  break;
			case 12:		
                  pc = (prog[pc].operand);
				  break;																													
			case 13: 	
                  if(acc == 0)
					   pc = (prog[pc].operand);
				  pc++;
				  break; 
			case 14:		
                  if(acc != 0)
					   pc = (prog[pc].operand);
				  pc++;
				  break;
			case 15:	
                  if(acc > 0)
					  pc = (prog[pc].operand);
				  pc++;
				  break;
			case 16:
                  if(acc < 0)
					  pc = (prog[pc].operand);
				  pc++;
				  break;
			case 17:		
                  if(acc >= 0)
					  pc = (prog[pc].operand);
				  pc++;
                  break;
			case 18:																																
                  if(acc <= 0)
					   pc = (prog[pc].operand);
				  pc++;
				  break;	
			case 19:
                  pc = i+1;
				  printf("Valor de ACC: %d\n", acc);
				//printf("Valor de stat: %03d\n", stat);
				  return 0;
        }
	}
    printf("Valor de ACC: %d\n", acc);
    fclose(file);	

	//printf("Valor de stat: %03d\n", stat);

	return 0;
}


//Alunos: Millena e Suru...

