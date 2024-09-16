#include <stdio.h>

int main()
{   
    float alunos[20];
    float notas[20];
    float media_geral = 0;  // Inicializar a variável
    int alunos_passados = 0;
    int alunos_reprovados = 0;
    
    for(int i = 1; i < 21; i++){  // Corrigir o operador de comparação
        printf("Digite a nota do aluno %i: ", i);  // Ajuste no índice da mensagem
        scanf("%f",&notas[i]);
        
        media_geral += (notas[i] / 20);
        
        if(notas[i] >= 7){
            alunos_passados++;
        } else {
            alunos_reprovados++;
        }
    }
    
    printf("\n\nMedia geral da turma:\t%.2f\nAlunos passados:\t%i\nAlunos reprovados:\t%i\n", media_geral, alunos_passados, alunos_reprovados);
   
    return 0;
}