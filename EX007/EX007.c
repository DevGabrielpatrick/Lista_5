#include <stdio.h>

int main() {
    int temperaturas[365];
    int i;
    int menor_temp, maior_temp;
    float soma_temp = 0.0;
    float media_anual;
    int dias_abaixo_da_media = 0;

    
    printf("Digite a temperatura média para cada um dos 365 dias do ano:\n");
    for (i = 0; i < 365; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &temperaturas[i]);
    }

    
    menor_temp = temperaturas[0];
    maior_temp = temperaturas[0];

    for (i = 0; i < 365; i++) {
        soma_temp += temperaturas[i];
        if (temperaturas[i] < menor_temp) {
            menor_temp = temperaturas[i];
        }
        if (temperaturas[i] > maior_temp) {
            maior_temp = temperaturas[i];
        }
    }

 
    media_anual = soma_temp / 365;

    
    for (i = 0; i < 365; i++) {
        if (temperaturas[i] < media_anual) {
            dias_abaixo_da_media++;
        }
    }

  
    printf("Menor temperatura do ano: %d\n", menor_temp);
    printf("Maior temperatura do ano: %d\n", maior_temp);
    printf("Temperatura média anual: %.2f\n", media_anual);
    printf("Número de dias com temperatura abaixo da média anual: %d\n", dias_abaixo_da_media);

    return 0;
}