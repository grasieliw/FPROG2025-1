#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
//dos valores sorteados.

int main(){

    int numeros[5], maior = 0, menor = 100, soma=0, media=0;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    for (int i = 0; i <= 4; i++)
    {
        numeros[i] = rand() % 100 + 1; // Número aleatório entre 1 e 100}
        if (numeros[i] > maior) maior = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];

        soma += numeros[i];
    }
    media = soma/5;

    printf("Os numeros sorteados são: %d, %d, %d, %d e %d", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);
    printf("\nO maior eh: %d\nO menor eh %d\nA media eh %d", maior, menor, media);
    return 0;
}