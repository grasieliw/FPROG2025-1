#include <stdio.h>
#include <ctype.h>

/*
Escreva um programa que leia 10 caracteres inseridos pelo usuário. Para cada caractere, o
programa deve informar se é uma letra, um número, ou um símbolo especial. Utilize a função
isalpha() da biblioteca ctype.h para verificar se o caractere é uma letra, e isdigit() para
números.
*/
int main(){
    char caractere;

    for (int i = 1; i <= 10; i++) {
        printf("\nTeste %d - Digite um caractere: ", i);
        scanf(" %c", &caractere);

        
        if (isalpha(caractere)) {           //verificacao caso seja uma letra
            printf("\nO cacartere %c eh uma letra", caractere);
        } else if (isdigit(caractere)) {           //verificacao caso seja uma numero
            printf("\nO cacartere %c eh um numero", caractere);
        } else printf("\nO cacartere %c eh um simbolo especial", caractere);
    }

    return 0;
}