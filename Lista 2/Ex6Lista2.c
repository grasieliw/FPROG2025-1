#include <stdio.h>

            int main()
                {
                    // A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma quantidade de
                    //tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$ 1500,00. Ao final do dia,
                    //o dono quer saber quanto arrecadou com a venda dos smartphones e dos tablets. Escreva um
                    //programa que leia o número de smartphones e tablets vendidos em um dia e calcule o total
                    //arrecadado
                    

                //variaveis    
                float precoSmartphone = 1000;
                float precoTablet = 1500;
                float quantidadeSmartphone = 0;
                float quantidadeTablet = 0;
                float totalVendido = 0;


                //entrada de dados
                printf("escreva a quantidade vendida de smartphones\n");
                scanf("%f", &quantidadeSmartphone);

                printf("escreva a quantidade vendida de tablets\n");
                scanf("%f", &quantidadeTablet);


                totalVendido = (quantidadeSmartphone * precoSmartphone) + (quantidadeTablet * precoTablet);     //calculo do total vendido

                //saida de dados
                printf("o valor arrecadado foi de  %.2f", totalVendido);

                return 0;
            }