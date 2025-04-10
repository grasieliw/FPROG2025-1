#include <stdio.h>

int main(){

//Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme
//as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou
//em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau
//A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o
//grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.

float grauA, grauB, grauC, resultado;
char opcaoGrauC;

printf("Digite sua nota do Grau A: ", grauA);
scanf("%f", &grauA);

printf("\nDigite sua nota do Grau B: ", grauA);
scanf("%f", &grauB);

resultado = (grauA + (2*grauB))/3;

if (resultado>6){
    printf("\n Sua nota eh %.2f - Voce esta aprovado", resultado);
} else {

        printf("\n Sua nota eh %.2f - Voce esta em recuperacao\n Digite 'a' para substituir Grau A e 'b' para substituir Grau B:", resultado);
        scanf("%s", &opcaoGrauC);

        printf("\n Digite a nota do Grau C: ");
        scanf("%f", &grauC);

        if (opcaoGrauC == 'a'){
            resultado = (grauC + (2*grauB))/3;
            printf("\n Sua nota final eh %.2f", resultado);
        } else if (opcaoGrauC == 'b'){
                resultado = (grauA + (2*grauC))/3;
                printf("\n Sua nota final eh %.2f", resultado);
            }
}

    return 0;
}