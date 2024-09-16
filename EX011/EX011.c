#include <stdio.h>
#include <locale.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
    int V1[15], V2[15], i, count = 0;

    printf("Digite os 15 números do vetor V1:\n");
    for (i = 0; i < 15; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &V1[i]);
    }

    printf("Digite os 15 números do vetor V2:\n");
    for (i = 0; i < 15; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &V2[i]);
    }

    for (i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            count++;
        }
    }

    printf("V1 e V2 possuem os mesmos números e nas mesmas posições %d vezes.\n", count);

    return 0;
}