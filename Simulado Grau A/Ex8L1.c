#include <stdio.h>

/*
Você está desenvolvendo um programa para monitoramento de uma área de floresta. A cada
dia, são feitos registros da quantidade de chuva (em mm). Escreva um programa que leia os
registros diários de chuva para uma semana e informe:
a. O total de chuva acumulada.
b. O dia com maior quantidade de chuva.
c. Se em algum dia a chuva foi menor que 5 mm, exiba uma mensagem de alerta sobre
possível seca.
*/

int main(){
    //ler registros diarios de uma semana - float           OK
    //exibir total de chuva acumulada
    //exibir dia com maior chuva
    //mensagem de alerta para chuva com menos de 5mm        OK

    float chuvaDia, somaSemana, maiorChuva;
    int diaMaiorChuva;

    for (int i = 1; i <= 7; i++) {
        printf("\nDigite a quantidade de chuva (em mm) para o dia %d: ", i);
        scanf(" %f", &chuvaDia);

        //calculo da soma da semana
        somaSemana += chuvaDia;

        //calculo do dia com maior chuva
        if(i==1) maiorChuva = chuvaDia;
        if (chuvaDia > maiorChuva){
            maiorChuva = chuvaDia;
            diaMaiorChuva = i;
        }

        //mensagem de alerta sobre chuva com menos de 5mm
        if(chuvaDia <5) printf("\nAlerta: Menos de 5mm - Possivel seca!");
        
    }
    
printf("\nDia com maior chuva: %d\nSoma da semana: %.2f\n", diaMaiorChuva, somaSemana);


    return 0;
}