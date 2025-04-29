#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um programa que sorteie três números inteiros entre 1 e 10. O programa deve
continuar sorteando até que o primeiro número seja menor que o segundo, e o segundo seja
menor que o terceiro. Não use o comando break.
Regras:
a) A cada iteração, o programa deve exibir os números sorteados.
b) Quando a condição for atendida (primeiro < e segundo e segundo < terceiro), o
programa deve imprimir uma mensagem indicando que os números satisfazem a
condição.
*/

int main(){

    srand(time(NULL));

    int primeiro, segundo, terceiro;    

    do
    {
        primeiro = 1 + rand() % (10 - 1 + 1);
        segundo = 1 + rand() % (10 - 1 + 1);
        terceiro = 1 + rand() % (10 - 1 + 1);
        printf("\nNumeros sorteados %d, %d, %d", primeiro, segundo, terceiro);

    } while (segundo <= primeiro || terceiro <= segundo);

    printf("\n\n%d < %d < %d", primeiro, segundo, terceiro);
    return 0;
}