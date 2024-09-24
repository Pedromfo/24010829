#include <stdio.h>

int main() {
    int ra; // Últimos 3 dígitos do seu RA

    // Leitura do valor em Fahrenheit
    printf("Digite os 3 últimos dígitos do seu RA (em Fahrenheit): ");
    scanf("%d", &ra);

    // Cálculo usando double
    double fahrenheit_double = ra;
    double celsius_double = (fahrenheit_double - 32.0) * 5.0 / 9.0;

    // Cálculo usando int
    int fahrenheit_int = ra;
    int celsius_int = (fahrenheit_int - 32) * 5 / 9;

    // Exibição dos resultados
    printf("Usando double: %d°F é aproximadamente %.2lf°C\n", fahrenheit_double, celsius_double);
    printf("Usando int: %d°F é aproximadamente %d°C\n", fahrenheit_int, celsius_int);

    return 0;
}
