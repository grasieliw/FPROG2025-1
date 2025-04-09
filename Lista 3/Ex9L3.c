#include <stdio.h>

int main() {
    float cotacaoDolar, cotacaoEuro;
    int menu;

    printf("Digite a cotacao do dolar: ");
    scanf(" %f", &cotacaoDolar);

    printf("Digite a cotacao do euro: ");
    scanf(" %f", &cotacaoEuro);

    printf("Digite um numero:\n 1 - Real para Euro\n 2 - Real para Dolar\n 3 - Euro para Dolar\n 4 - Euro para Real\n 5 - Dolar para Euro\n 6 - Dolar para Real\n");
    scanf("%d", &menu);

    printf("Opcao escolhida: %f\n", cotacaoEuro);

    switch (menu) {
        case 1:  // real para euro
            printf("Cotacao de real para euro: %.2f \n", cotacaoEuro);
            break;
        case 2:  // real para dolar
            printf("Cotacao de real para dolar: %.2f\n", cotacaoDolar);
            break;
        case 3:  // euro para dolar
            printf("Cotacao de euro para dolar: %.2f\n", (cotacaoEuro / cotacaoDolar));
            break;
        case 4:  // euro para real
            printf("Cotacao de euro para real: %.2f\n", (1 / cotacaoEuro));
            break;
        case 5:  // dolar para euro
            printf("Cotacao de dolar para euro: %.2f\n", (cotacaoDolar / cotacaoEuro));
            break;
        case 6:  // dolar para real
            printf("Cotacao de dolar para real: %.2f\n", (1 / cotacaoDolar));
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
