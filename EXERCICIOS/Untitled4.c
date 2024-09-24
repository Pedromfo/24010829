#include <stdio.h>

int main() {
    float temperature;

    // Solicita ao usu�rio que insira a temperatura em graus Celsius
    printf("Insira a temperatura atual em graus Celsius: ");
    scanf("%f", &temperature);

    // Avalia a temperatura e fornece a previs�o do tempo
    if (temperature <= 0) {
        printf("\nGeleira - Temperatura muito fria!\n");
    } else if (temperature >= 1 && temperature <= 15) {
        printf("\nFrio - Pode precisar de um casaco!\n");
    } else if (temperature >= 16 && temperature <= 25) {
        printf("\nAgrad�vel - Tempo bom para sair!\n");
    } else if (temperature >= 26 && temperature <= 35) {
        printf("\nQuente - �timo para um dia de praia!\n");
    } else {
        printf("\nMuito quente - Mantenha-se hidratado!\n");
    }

    return 0;
}
