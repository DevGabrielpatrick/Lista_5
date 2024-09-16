#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int A[10];
    int M[10];
    int X;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor da posição de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite um número para o valor X: ");
    scanf("%d", &X);

    for (i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    printf("Vetor M (resultados da multiplicação):\n");
    for (i = 0; i < 10; i++) {
        printf("%d x %d = %d\n",X , A[i], M[i]);
    }

    return 0;
}