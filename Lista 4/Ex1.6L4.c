#include <stdio.h>

//Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
//ímpares lidos

int main (){

    int par = 0, impar = 0;

for (int i = 1; i <= 11; i++)
{
    if (i%2 == 0)
    {
        par++;
    } else if (i%2 != 0)
    {
        impar++;
    }
     
}

printf("A quantidade de numeros pares eh %d e de impares eh %d", par, impar);
}