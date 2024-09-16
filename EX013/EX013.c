#include <locale.h>
#include <stdio.h>
	 
int main() {
	setlocale(LC_ALL, "Portuguese");
    int VET[50], i, j, count = 0;
    int repetidos[50][2]; 
    printf("Digite os 50 números do vetor VET:\n");
    for (i = 0; i < 50; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &VET[i]);
    }

    for (i = 0; i < 50; i++) {
        for (j = i + 1; j < 50; j++) {
            if (VET[i] == VET[j]) {
                repetidos[count][0] = VET[i];
                repetidos[count][1] = j;
                count++;
            }
        }
    }

    if (count > 0) {
        printf("Existem números repetidos no vetor VET:\n");
        for (i = 0; i < count; i++) {
            printf("Número %d se encontra nas posições %d e %d\n", repetidos[i][0], i + 1, repetidos[i][1] + 1);
        }
    } else {
        printf("Não existem números repetidos no vetor VET.\n");
    }

    return 0;
}