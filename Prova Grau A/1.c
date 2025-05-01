#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um programa que sorteie números inteiros e decimais, respondendo a cada um dos
subitens abaixo:
    a) Sortear um número inteiro positivo entre 1 e 100 (inclusive)
    b) Sortear um número inteiro negativo entre -100 e -1 (inclusive)
    c) Sortear um número inteiro entre -50 e 50 (inclusive)
    d) Sortear um número real entre -1.0 e 1.0, com 1 casa decimal
    e) Sortear um número inteiro entre 50 e 150, divisível por 5
*/


int main(){

    srand(time(NULL));

    //Sortear um número inteiro positivo entre 1 e 100 (inclusive)
    int a = 1 + rand() % (100 - 1 + 1);

    //Sortear um número inteiro negativo entre -100 e -1 (inclusive)
    int b = -100 + rand() % ((-1 - (-100)) + 1);

    //Sortear um número inteiro entre -50 e 50 (inclusive)
    int c = -50 + rand() % (50 - (-50) + 1);

    //Sortear um número real entre -1.0 e 1.0, com 1 casa decimal
    
        // Multiplicando os limites por 10 para trabalhar com inteiros
        int minimo = -10; // -1.0 * 10
        int maximo = 10; // 1.0 * 10
        // Sorteando um número inteiro entre -10 e 10
        int numeroSorteado = rand() % (maximo - minimo + 1) + minimo;
        // Dividindo por 10 para obter o valor com uma casa decimal
        float resultado = numeroSorteado / 10.0;
    
    //Sortear um número inteiro entre 50 e 150, divisível por 5
    int e = rand() % 21 * 5 + 50;
    
    return 0;
}