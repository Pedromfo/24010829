#include <stdio.h>

int main() {
    float temperature;

    // Solicita a temperatura atual do depósito
    printf("Digite a temperatura atual do depósito (em Celsius): ");
    scanf("%f", &temperature);

    // Classifica o nível de risco com base na temperatura
    if (temperature < -10) {
        printf("\nRisco Baixo - Armazenamento ideal para alimentos congelados.\n");
    } else if (temperature >= -10 && temperature <= 0) {
        printf("\nRisco Moderado - Condições aceitáveis para armazenamento refrigerado.\n");
    } else if ((temperature >= 1 && temperature <= 10) || temperature == 15) {
        printf("\nRisco Elevado - Monitore a temperatura.\n");
    } else if (temperature > 10 && temperature != 15) {
        printf("\nRisco Crítico - Ação Imediata Necessária!\n");
    } else {
        printf("\nEntrada de temperatura inválida.\n");
    }

    return 0;
}

