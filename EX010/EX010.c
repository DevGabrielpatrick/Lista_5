#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 

    int vetor[20]; 
    int i; 
    int opcao;

    do {
        printf("Digite 20 números:\n");
        for (i = 0; i < 20; i++) {
            printf("Número %d: ", i + 1);
            scanf("%d", &vetor[i]);
        }
        int novo_numero;
        printf("Digite um novo número:\n");
        scanf("%d", &novo_numero);
        int existe = 0;
        for (i = 0; i < 20; i++) {
            if (vetor[i] == novo_numero) {
                existe = 1;
                break;
            }
        }
        if (existe) {
            int novo_vetor[19];
            int j = 0;
            for (i = 0; i < 20; i++) {
                if (vetor[i] != novo_numero) {
                    novo_vetor[j] = vetor[i];
                    j++;
                }
            }
            printf("Novo vetor sem o número %d:\n", novo_numero);
            for (i = 0; i < 19; i++) {
                printf("%d ", novo_vetor[i]);
            }
            printf("\n");
        } else {
            printf("O número %d não existe no vetor.\n", novo_numero);
        }

        printf("Deseja executar o programa novamente? (1 - Sim, 2 - Não)\n");
        scanf("%d", &opcao);
    } while (opcao == 1);

    return 0;
}