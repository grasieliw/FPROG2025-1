#include <stdio.h>

//Implemente uma função cumprimentar que receba como parâmetro o nome de uma pessoa e escreva
//a mensagem “Olá, <nome_da_pessoa>!”

void cumprimentar(char nome[]){

    printf("Ola, %s!\n", nome);
}


int main(){

    char nome[50];

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    cumprimentar(nome);

    return 0;
}


