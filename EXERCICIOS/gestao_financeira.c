#include <stdio.h>

int main(void) {
    float receitaDiaria, despesaDiaria, saldoFinal;

    printf("Digite a receita do dia: ");
    scanf("%f", &receitaDiaria);

    printf("Digite as despesas do dia: ");
    scanf("%f", &despesaDiaria);

    saldoFinal = receitaDiaria - despesaDiaria;

    printf("Saldo do dia: %.2f", saldoFinal);

    return 0;
}