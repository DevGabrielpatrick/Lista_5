#include <locale.h>
#include <stdio.h>

int main() {
	 setlocale(LC_ALL, "Portuguese");
    int vetor[30], i, numero, count = 0;

    printf("Digite os 30 números do vetor:\n");
    for (i = 0; i < 30; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número qualquer:\n");
    scanf("%d", &numero);

    for (i = 0; i < 30; i++) {
        if (vetor[i] == numero) {
            count++;
        }
    }

    printf("O número %d aparece %d vezes no vetor.\n", numero, count);

    return 0;
}