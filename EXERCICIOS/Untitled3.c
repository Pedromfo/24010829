#include <stdio.h>

int main() {
    int ra; // �ltimos 3 d�gitos do seu RA

    // Leitura do valor em Fahrenheit
    printf("Digite os 3 �ltimos d�gitos do seu RA (em Fahrenheit): ");
    scanf("%d", &ra);

    // C�lculo usando double
    double fahrenheit_double = ra;
    double celsius_double = (fahrenheit_double - 32.0) * 5.0 / 9.0;

    // C�lculo usando int
    int fahrenheit_int = ra;
    int celsius_int = (fahrenheit_int - 32) * 5 / 9;

    // Exibi��o dos resultados
    printf("Usando double: %d�F � aproximadamente %.2lf�C\n", fahrenheit_double, celsius_double);
    printf("Usando int: %d�F � aproximadamente %d�C\n", fahrenheit_int, celsius_int);

    return 0;
}
