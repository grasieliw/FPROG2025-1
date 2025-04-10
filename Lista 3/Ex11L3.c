#include <stdio.h>

int main()
{
int valor;
    printf("Digite o valor em reais: R$ ");
    scanf("%d", &valor);

int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n1 = 0;

 if (valor >= 100) {
        n100 = valor / 100;
        valor = valor % 100;
    }
    if (valor >= 50) {
        n50 = valor / 50;
        valor = valor % 50;
    }
    if (valor >= 20) {
        n20 = valor / 20;
        valor = valor % 20;
    }
    if (valor >= 10) {
        n10 = valor / 10;
        valor = valor % 10;
    }
    if (valor >= 5) {
        n5 = valor / 5;
        valor = valor % 5;
    }
    if (valor >= 1) {
        n1 = valor;
    }

    // Exibir apenas as notas utilizadas
    if (n100 > 0) printf("%d nota(s) de R$ 100.\n", n100);
    if (n50 > 0) printf("%d nota(s) de R$ 50.\n", n50);
    if (n20 > 0) printf("%d nota(s) de R$ 20.\n", n20);
    if (n10 > 0) printf("%d nota(s) de R$ 10.\n", n10);
    if (n5 > 0) printf("%d nota(s) de R$ 5.\n", n5);
    if (n1 > 0) printf("%d nota(s) de R$ 1.\n", n1);

    return 0;



}