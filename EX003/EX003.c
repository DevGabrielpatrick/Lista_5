#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Q[20];
    int i;
    int menor_elemento, posicao_menor;

    for (i = 0; i < 20; i++) {
        do {
            printf("Digite o número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
            if (Q[i] <= 0) {
                printf("Por favor, digite um número positivo.\n");
            }
        } while (Q[i] <= 0);
    }

    menor_elemento = Q[0];
    posicao_menor = 0;
    
    for (i = 1; i < 20; i++) {
        if (Q[i] < menor_elemento) {
            menor_elemento = Q[i];
            posicao_menor = i;
        }
    }

    printf("O menor elemento é %d e está na posição %d.\n", menor_elemento, posicao_menor);

    return 0;
}