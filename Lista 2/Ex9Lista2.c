#include <stdio.h>

            int main()
            {
                    // Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras feitas pelos
                    //clientes. Faça um programa que leia o valor da compra e escreva o valor da compra com o desconto. 

                //variaveis    
                float valorCompra;
                float valorFinal;

                //entrada de dados
                printf("escreva o valor da compra\n");
                scanf("%f", &valorCompra);

                valorFinal = valorCompra * 0.85;                //calculo do valor final

                //saida de dados
                printf("o valor final eh  %.2f", valorFinal);
                return 0;
            }