#include <stdio.h>

/*
Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
12 e 20
*/


int main(){

    int numeros[5], resultado;

    for (int i = 0; i < 5; i++)
    {
        printf("%d - Digite um numero: ", i);
        scanf(" %d", &numeros[i]);

        resultado = numeros[i] * i;
        printf("\nResultado %d: %d x %d = %d", i, numeros[i], i, resultado);
    }

    return 0;
}