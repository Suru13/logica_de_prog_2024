#include <stdio.h>
typedef struct __instr{
    unsigned char opcode;
    unsigned char operand;
} instr;


int main()
{
    instr program[256];
    
    FILE * file = fopen("exemplo.bin", "rb");
    
    short instruction;
    
    int i = 0;
    while(fread(&instruction, 2,1, file) ==2){
        program[i].opcode = instruction & 0xFF;
        program[i].operand = instruction >> 8;
        
        printf("%.2x %2x\n", program[i].opcode, program[i].operand);
        i++;
    }
    unsigned char stat = 0;
    int pc = 0;
    int acc = 0;
    unsigned char mem[256];
    
    
   
    while (1) {
        
        stat = 0;
        switch (program[pc].opcode) {
            case 0:{
                acc = mem[program[pc].operand];
                pc++;
                break;
            }
            case 1:{
                acc = program[pc].operand;
                pc++;
                break;
            }
            case 2: 
                mem[program[pc].operand] = acc;
                pc++;
                break;
            case 3: 
                acc += mem[program[pc].operand];
                pc++;
                break;
            case 4: 
                acc -= mem[program[pc].operand];
                pc++;
                break;
            case 5: 
                acc *= mem[program[pc].operand];
                pc++;
                break;
            case 6: 
                if (mem[program[pc].operand] != 0)
                    acc /= mem[program[pc].operand];
                else
                    printf("Erro: Divisão por zero.\n");
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
                acc &= mem[program[pc].operand];
                pc++;
                break;
            case 10: 
                acc |= mem[program[pc].operand];
                pc++;
                break;
            case 11: 
                acc = ~acc;
                pc++;
                break;
            case 12: 
                pc = program[pc].operand;
                break;
            case 13: 
                if (acc == 0)
                    pc = program[pc].operand;
                else
                    pc++;
                break;
            case 14: 
                if (acc != 0)
                    pc = program[pc].operand;
                else
                    pc++;
                break;
            case 15: 
                if (acc > 0)
                    pc = program[pc].operand;
                else
                    pc++;
                break;
            case 16: 
                if (acc < 0)
                    pc = program[pc].operand;
                else
                    pc++;
                break;
            case 17: 
                if (acc >= 0)
                    pc = program[pc].operand;
                else
                    pc++;
                break;
            case 18: 
                if (acc <= 0)
                    pc = program[pc].operand;
                else
                    pc++;
                break;
            case 19: 
                printf("ACC = %d\n", acc);
                printf("Flags OCZ = %d%d%d\n", (stat & 4) >> 2, (stat & 2) >> 1, stat & 1);
                printf("Programa encerrado.\n");
                return 0;

            default:
                printf("Erro: Opcode desconhecido.\n");
                return 1;
                
        }
        
        if (acc == 0)
        stat |= 1; // Define a flag de zero no registro de status
    }



    printf("ACC = %d\n", acc);
    printf("Flags OCZ = %d%d%d\n", (stat & 4) >> 2, (stat & 2) >> 1, stat & 1);
    
    
    return 0;
}
