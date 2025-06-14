#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[5][5];

    srand(time(NULL));

    // Gerar matriz com valores aleatórios entre -10 e 10
    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] = (rand() % 21) - 10; // Gera entre -10 e 10
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    // Transformar positivos em negativos e negativos em positivos
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] *= -1;  // Inverte o sinal
        }
    }

    // Imprimir matriz transformada
    printf("\nMatriz com sinais invertidos:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
