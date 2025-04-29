#include <stdio.h>

/*
Em um experimento geológico, sensores medem o deslocamento de uma placa tectônica (em
centímetros) a cada dia. Escreva um programa que leia os valores de deslocamento para 5
dias e exiba:
a) O deslocamento total ao longo do período.
b) O maior deslocamento registrado.
c) A média de deslocamento diário.
*/

int main(){

float deslocamento, somaDeslocamento, maiorDeslocamento, mediaDeslocamento;
int diaMaiorDeslocamento;

for (int i = 1; i <= 5; i++) {
    printf("\nDia %d - Deslocamento (em cm): ", i);
    scanf(" %f", &deslocamento);

    //calculo da soma deslocamento total
    somaDeslocamento += deslocamento;

    //calculo do dia de maior deslocamento
    if (i == 1) maiorDeslocamento = deslocamento;
    if (deslocamento > maiorDeslocamento){
        maiorDeslocamento = deslocamento;
        diaMaiorDeslocamento = i;
    }
}
//calculo da media de deslocamento diario
mediaDeslocamento = somaDeslocamento/5;

//exibicao de resultados
printf("\nTotal de deslocamento no periodo: %.2f\nMedia de deslocamento no periodo: %.2f\nDia de maior deslocamento: %d\n", somaDeslocamento, mediaDeslocamento, diaMaiorDeslocamento);

    return 0;
}