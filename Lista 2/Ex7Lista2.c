#include <stdio.h>

            int main()
            {
                    // Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar seus
                    //pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que leia o número
                    //de pássaros que o criador possui e calcule a quantidade total de ração necessária por dia.
                    
                //variaveis
                float racaoDia = 30;
                float quantidadePassaros = 0;
                float quantidadeRacaoDia = 0;

                //entrada de dados
                printf("escreva a quantidade de passaros\n");
                scanf("%f", &quantidadePassaros);

                quantidadeRacaoDia = quantidadePassaros * racaoDia;         //calculo da quantidade de racao por dia

                //saida de dados
                printf("o total de racao necessaria por dia eh  %.2f", quantidadeRacaoDia);
                return 0;
            }