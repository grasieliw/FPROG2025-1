#include <stdio.h>

/*
Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um
programa que:
    a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
    b. Calcule o total de passos dados na semana.
    c. Calcule a média diária de passos.
    d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
    informe quais dias a meta foi alcançada.
*/



int main(){

    //variaveis
    int soma=0, media=0, passosSemana[7]={0};


    //entrada de dados
    for (int i = 0; i <= 6; i++)
    {
        printf("\n Dia %d - Digite a quantidade de passos: ", (i+1));                                 //entrada de dados
        scanf("%d", &passosSemana[i]);

        if (passosSemana[i] >= 10000){
            printf("\n Dia %d : meta de 10 000 passos alcancada", (i+1));
        }
        soma += passosSemana[i];
    }
    
    media = soma/7;
    printf("\n\n Soma de passos da semana: %d passos", soma);
    printf("\n Media de passos por dia: %d passos", media);

    return 0;
}