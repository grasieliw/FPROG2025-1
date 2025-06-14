#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
array com 6 posições e ao final imprima o percentual do resultado de cada face.
*/


int main(){

    int quantLancamentos, numero;
    int resultadoDado[6]= {0};

    srand(time(NULL));

    printf("\nDigite a quantidade de lancamentos do dado: ");                                 //entrada de dados
    scanf("%d", &quantLancamentos);

    for (int i=0; i<quantLancamentos; i++){

        numero = (rand() % 6) + 1;

        switch (numero)
        {
        case 1:
            resultadoDado[0] += 1;
            break;

        case 2:
            resultadoDado[1] += 1;
            break;
        
        case 3:
            resultadoDado[2] += 1;
            break;

        case 4:
            resultadoDado[3] += 1;
            break;

        case 5:
            resultadoDado[4] += 1;
            break;

        case 6:
            resultadoDado[5] += 1;
            break;        

        default:
            break;
        }
        printf("%d", numero);
    }

    for (int i = 1; i <= 6; i++)
    {
        float percentual = (resultadoDado[i-1] * 100.0) / quantLancamentos;
        printf("\n A porcentagem de resultado %d eh %.2f%%", i, percentual);
    }

    return 0;
}