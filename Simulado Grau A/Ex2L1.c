#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um programa que sorteie:
a. Um número entre 130 e 670.
b. Um número entre -20 e -5.
c. Um número entre -10 e 10.
d. Um número entre 10.5 e 50.2, com uma casa decimal.
e. Um número entre 0 e 100, que seja múltiplo de 5.
f. Um caractere entre 'A' (65) e 'Z' (90).
*/
int main(){

    srand(time(NULL));

    int numero;

    //sorteio de numero entre 130 e 670
    int a = 130 + rand() % (670 - 130 + 1);

    //sorteio de numero entre -20 e -5
    int b = -20 + rand() % (-5 - (-2) + 1);

    //sorteio de numero entre -10 e 10
    int c = -10 + rand() % (10 - (-10) + 1);

    //sorteio de numero entre 10.5 e 5.2
    float d = 52 + rand() % (105 - 52 + 1);

    float resultado = d/10.0;

    //sorteio de numero entre 0 e 100 multiplo de 5
    // Existem 21 múltiplos de 5 entre 0 e 100 (inclusive).
    // Sorteamos um número entre 0 e 20 com rand() % 21, e depois multiplicamos por 5.
    // Isso garante que o valor sorteado será um múltiplo de 5.
    int e = (rand() % 21) * 5;
    

    


    


    return 0;
}