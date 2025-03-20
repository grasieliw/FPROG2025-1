#include <stdio.h>

            int main()
            {
                    //Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o peso do
                    //prato do cliente e calcule o valor a ser pago
                    
                //variaveis    
                float pesoPrato;
                float valorPago;

                //entrada de dados
                printf("escreva o peso do prato em kg\n");
                scanf("%f", &pesoPrato);


                valorPago = pesoPrato * 40;

                //saida de dados
                printf("o valor total eh %.2f", valorPago);
                return 0;
            }