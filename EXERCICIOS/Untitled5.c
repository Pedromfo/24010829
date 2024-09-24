#include <stdio.h>

int main() {
    float temperature;

    // Solicita a temperatura atual do dep�sito
    printf("Digite a temperatura atual do dep�sito (em Celsius): ");
    scanf("%f", &temperature);

    // Classifica o n�vel de risco com base na temperatura
    if (temperature < -10) {
        printf("\nRisco Baixo - Armazenamento ideal para alimentos congelados.\n");
    } else if (temperature >= -10 && temperature <= 0) {
        printf("\nRisco Moderado - Condi��es aceit�veis para armazenamento refrigerado.\n");
    } else if ((temperature >= 1 && temperature <= 10) || temperature == 15) {
        printf("\nRisco Elevado - Monitore a temperatura.\n");
    } else if (temperature > 10 && temperature != 15) {
        printf("\nRisco Cr�tico - A��o Imediata Necess�ria!\n");
    } else {
        printf("\nEntrada de temperatura inv�lida.\n");
    }

    return 0;
}

