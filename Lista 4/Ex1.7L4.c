#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;
    int positivos = 0, negativos = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    printf("Numeros sorteados e suas classificacoes:\n");

    for (int i = 0; i < 20; i++) {
        // Sorteia número entre -10 e 10
        numero = (rand() % 21) - 10;

        // Imprime o número e sua classificação
        printf("%d -> ", numero);
        if (numero > 0) {
            printf("POSITIVO\n");
            positivos++;
        } else if (numero < 0) {
            printf("NEGATIVO\n");
            negativos++;
        } else {
            printf("NULO\n");
        }
    }

    // Exibe o total de positivos e negativos
    printf("\nTotal de POSITIVOS: %d\n", positivos);
    printf("Total de NEGATIVOS: %d\n", negativos);

    return 0;
}
