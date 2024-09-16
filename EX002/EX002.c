#include <stdio.h>
#include <locale.h>
int main() {
	
	setlocale(LC_ALL,"Portuguese");
    int Q[20];
    int i;
    int maior_elemento, posicao_maior;

    for (i = 0; i < 20; i++) {
        do {
            printf("Digite o número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
            if (Q[i] <= 0) {
                printf("Por favor, digite um número positivo.\n");
            }
        } while (Q[i] <= 0);
    }

    maior_elemento = Q[0];
    posicao_maior = 0;
    
    for (i = 1; i < 20; i++) {
        if (Q[i] > maior_elemento) {
            maior_elemento = Q[i];
            posicao_maior = i;
        }
    }

    printf("O maior elemento é %d e está na posição %d.\n", maior_elemento, posicao_maior);

    return 0;
}