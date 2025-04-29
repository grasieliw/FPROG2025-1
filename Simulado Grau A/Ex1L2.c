#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um programa que sorteie números inteiros e decimais, respondendo a cada um dos
subitens abaixo:
a) Sorteie um número entre -50 e 50.
b) Sorteie um número par entre 20 e 100.
c) Sorteie um número decimal entre 0 e 1 com duas casas decimais.
*/

int main(){

    srand(time(NULL));

    //sorteio de numero entre -50 e 50
    int a = -50 + rand() % (50 - (-50) + 1);

    //sorteio de numero par entre 20 e 100
    int b = rand() % 41 * 2 + 20;   
        //rand() % 41 sorteia um número entre 0 e 40.
        //Multiplicando por 2, garantimos que o número será par.
        //Somamos 20 para ajustar o intervalo para [20, 100].                       

    //sorteio de numero entre 0 e 1
    float c = rand() % 101 / 100.0;
    

    return 0;
}