#include <stdio.h>

int main() {

    float preco_acao1 = 24.13, dividendos_acao1 = 17.00;
    float preco_acao2 = 11.00, dividendos_acao2 = 35.00;
    float preco_acao3 = 38.65, dividendos_acao3 = 25.00;

    int qtd_acao1, qtd_acao2, qtd_acao3;

    float total_investimento = 1000.00;


    printf("Digite a quantidade de acoes da Acao 1 que deseja comprar (preco: R$24.13): ");
    scanf("%d", &qtd_acao1);

    printf("Digite a quantidade de acoes da Acao 2 que deseja comprar (preco: R$11.00): ");
    scanf("%d", &qtd_acao2);

    printf("Digite a quantidade de acoes da Acao 3 que deseja comprar (preco: R$38.65): ");
    scanf("%d", &qtd_acao3);

    float valor_total = (qtd_acao1 * preco_acao1) + (qtd_acao2 * preco_acao2) + (qtd_acao3 * preco_acao3);

    if (valor_total > total_investimento) {
        printf("\nErro: O valor total a ser investido excede R$1000.00. Tente novamente.\n");
        return 1;
    }

    float dy_acao1 = (dividendos_acao1 / preco_acao1) * 100;
    float dy_acao2 = (dividendos_acao2 / preco_acao2) * 100;
    float dy_acao3 = (dividendos_acao3 / preco_acao3) * 100;

    printf("\nResumo do investimento:\n");
    printf("--------------------------------------------------\n");
    printf("Acao 1 - Quantidade: %d | Dividend Yield (DY): %.2f%%\n", qtd_acao1, dy_acao1);
    printf("Açao 2 - Quantidade: %d | Dividend Yield (DY): %.2f%%\n", qtd_acao2, dy_acao2);
    printf("Açao 3 - Quantidade: %d | Dividend Yield (DY): %.2f%%\n", qtd_acao3, dy_acao3);
    printf("--------------------------------------------------\n");
    printf("Valor total investido: R$%.2f\n", valor_total);

    return 0;
}