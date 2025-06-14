#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
dia. Escreva um programa que:
    a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
    b. Calcule o consumo total do mês.
    c. Calcule a média de consumo diário.
    d. Imprima o dia em que houve o maior consumo e o menor consumo de água.
*/

int main(){

    //variaveis
    int consumoAgua[30]={0}, somaMes=0, mediaMes=0, maiorConsumo=100, diaMaiorConsumo=0, diaMenorConsumo=0, menorConsumo=500;

    srand(time(NULL));

    for (int i = 0; i < 30; i++)
    {
        consumoAgua[i] = (rand() % (500 - 100 + 1)) + 100;

        somaMes += consumoAgua[i];

        //verificacao maior/menor consumo do mes
        if (consumoAgua[i] > maiorConsumo){
            maiorConsumo = consumoAgua[i];
            diaMaiorConsumo = i+1;
        }

        if (consumoAgua[i] < menorConsumo){
            menorConsumo = consumoAgua[i];
            diaMenorConsumo = i+1;
        }
        
    }

    mediaMes = somaMes/30;


    printf("\n Consumo total do mes: %d litros", somaMes);
    printf("\n Media de consumo no mes: %d litros/dia", mediaMes);
    printf("\n\n Maior consumo mes foi de %d litros no dia %d", maiorConsumo, diaMaiorConsumo);
    printf("\n Menor consumo mes foi de %d litros no dia %d", menorConsumo, diaMenorConsumo);

    

    return 0;
}