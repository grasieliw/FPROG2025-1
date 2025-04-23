#include <stdio.h>

//Ler 15 números e escrever a soma e a média dos números lidos

int main (){

    int soma = 0, media = 0;

for (int i = 1; i <= 16; i++)
{
    printf("%d\n", i);
    soma += i;
    
}
media = soma/15;
printf("A soma eh %d e a media eh %d", soma, media);
}