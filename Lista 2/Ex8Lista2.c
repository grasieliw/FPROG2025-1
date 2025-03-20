#include <stdio.h>

            int main()
            {
                    // Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa que leia
                    //a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.
                
                //variaveis
                float temperaturaCelsius;
                float temperaturaFahrenheit;

                //entrada de dados
                printf("escreva a temperatura em Celsius\n");
                scanf("%f", &temperaturaCelsius);

                temperaturaFahrenheit = temperaturaCelsius *1.8 + 32;           // calculo da conversao da temperatura

                //saida de dados
                printf("a temperatura em Fahrenheit eh  %.2f", temperaturaFahrenheit);
                return 0;
            }