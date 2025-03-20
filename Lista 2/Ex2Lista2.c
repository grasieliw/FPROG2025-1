#include <stdio.h>

            int main()
            {
                //Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a cotação
                //do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o valor total em
                //reais que ele precisará pagar.
                
                //variaveis
                float cotacaoDolar;
                float quantidadeDolar;
                float valorTotal;

                //entrada de dados
                printf("escreva a cotacao do dolar hoje\n");
                scanf("%f", &cotacaoDolar);

                printf("escreva a quantidade de dolares que deseja comprar\n");
                scanf("%f", &quantidadeDolar);

                
                valorTotal = cotacaoDolar * quantidadeDolar;

                //saida de dados
                printf("o valor total eh %f", valorTotal);
                return 0;
            }