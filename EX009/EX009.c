#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 

    int vetor[11]; 
    int i, j, temp; 

    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    printf("Digite um novo número:\n");
    scanf("%d", &vetor[10]);
    for (i = 9; i >= 0; i--) {
        if (vetor[i] > vetor[10]) {
            temp = vetor[i];
            vetor[i] = vetor[10];
            vetor[10] = temp;
        } else {
            break;
        }
    }
    printf("Vetor ordenado em ordem crescente com o novo número:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}