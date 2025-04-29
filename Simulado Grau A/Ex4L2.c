#include <stdio.h>

/*
Você está desenvolvendo um simulador ambiental que mede o nível de poluição do ar em
uma cidade. O nível de poluição é medido a cada 3 horas. Escreva um programa que leia 8
medições (um dia completo) e determine:
a) A média de poluição diária.
b) Se alguma medição excedeu 150 ppm (partes por milhão), exiba uma mensagem de
alerta sobre qualidade do ar.
c) Ao final, exiba o número total de medições que geraram um alerta.
*/

int main(){
    float poluicaoMedidor, somaMedicao=0, mediaPoluicao;
    int totalAlertas=0;

    for (int i = 1; i <= 8; i++) {
        printf("\nMedicao %d - Nivel de poluicao (em ppm): ", i);
        scanf(" %f", &poluicaoMedidor);

        //calculo da soma da poluicao
        somaMedicao += poluicaoMedidor;

        //calculo do alerta
        if (poluicaoMedidor > 150){
            printf("\nAlerta: Poluicao alta na medicao\n\n");
            totalAlertas++;
        }
        
    }
    //calculo da media da poluicao diaria
    mediaPoluicao = somaMedicao/8;

    //exibicao de resultados
    printf("\nMedia da poluicao diaria: %.2f\nTotal de medicoes que geraram alertas: %d", mediaPoluicao, totalAlertas);
    
    return 0;
}