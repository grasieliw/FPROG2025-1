#include <stdio.h>

            int main()
            {
                // Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do grau A
                //e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau B 2/3.

                //variaveis
                float notaGrauA;
                float notaGrauB;
                float resultadoFinal;

                //entrada de dados
                printf("escreva sua nota do Grau A\n");
                scanf("%f", &notaGrauA);

                printf("escreva sua nota do Grau B\n");
                scanf("%f", &notaGrauB);


                resultadoFinal = (notaGrauA + 2*notaGrauB)/3;       //calculo do resultado final

                //saida de dados
                printf("a sua nota eh %.2f", resultadoFinal);

                return 0;
            }
