#include <stdio.h>

            int main()
            {
                // Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para ler o
                //preço do litro da gasolina e o valor que o motorista tem disponível para abastecer. Calcule quantos
                //litros ele conseguiu colocar no tanque e exiba na tela
                

                //variaveis
                float precoLitro;
                float valorAbastecer;
                float LitrosTanque;

                //entrada de dados
                printf("escreva o preco por litro da gasolina\n");
                scanf("%f", &precoLitro);

                printf("escreva o valor que deseja abastecer\n");
                scanf("%f", &valorAbastecer);


                LitrosTanque = valorAbastecer / precoLitro;                     //calculo da quantidade de litros no tanque

                //saida de dados
                printf("foi possivel abastecer  %.2f litros", LitrosTanque);

                return 0;
            }