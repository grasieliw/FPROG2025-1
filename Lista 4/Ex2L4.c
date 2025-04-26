#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
//A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.

int main(){

    // Inicializa o gerador de números aleatórios
 
    int numero = 0;
    int tentativa;
    int i_tentativa = 1;

    srand(time(NULL));
    numero = rand() % 10 + 1;                                                             // gerador de numeros aleatorios entre 1 e 10

    for (int i=1; i<=3; i++){


        printf("\nDigite sua %d tentativa de acertar o numero aleatorio: ", i_tentativa);      //entrada de dados do usuario
        scanf(" %d", &tentativa);

        if (tentativa == numero){                                                           //caso o usuario acerte o numero
            printf("\nParabens voce acertou o numero !!!");
            break;
        } else if (tentativa < numero)
        {
            printf("\nSeu numero eh menor que o numero sorteado");
            i_tentativa++;
        } else if (tentativa > numero) {
            printf("\nSeu numero eh maior que o numero sorteado");
            i_tentativa++;
        }

    }
    printf("\nDesafio finalizado - o numero sorteado era %d", numero);

    return 0;
}