#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[20];
    int i;

   
    printf("Digite 20 números:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("Os números na ordem inversa são:\n");
    for (i = 19; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}