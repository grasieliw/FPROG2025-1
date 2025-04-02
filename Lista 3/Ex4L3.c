#include <stdio.h>

int main(){

    //Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3

    int n1;
    printf("Digite um numero:\n");
    scanf(" %d", &n1);

    if ((n1%3) == 0)
    {
        printf("O numero eh divisivel por 3");
    } else {
        printf("O numero nao eh divisivel por 3");
    }
    
    return 0;
}