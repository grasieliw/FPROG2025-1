#include <stdio.h>

int main(){
    //Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se é ímpar

    int n1;
    printf("Digite um numero:\n");
    scanf(" %d", &n1);

    if ((n1%2) == 0)
    {
        printf("O numero eh par");
    } else {
        printf("O numero nao eh par");
    }

    return 0;
}