#include <stdio.h>

            int main()
            {
                    // O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer que você
                    //calcule quanto cada cliente gastou na loja apenas informando o número de camisetas, calças e cintos
                    //comprados. As camisetas custam R$ 25,00, as calças R$ 100,00 e os cintos R$ 40,00. Some o valor da
                    //compra e ao final dê um desconto de 10 por cento sobre o total. Exiba na tela o valor do desconto e
                    //o valor da compra.

                //variaveis    
                float valorCamiseta = 25;
                float valorCalca = 100;
                float valorCinto = 40;
                float quantidadeCamiseta;
                float quantidadeCalca;
                float quantidadeCinto;
                float valorCompra;
                float valorDesconto;
                float valorComDesconto;

                //entrada de dados
                printf("escreva a quantidade de camisetas compradas\n");
                scanf("%f", &quantidadeCamiseta);

                printf("escreva a quantidade de calcas compradas\n");
                scanf("%f", &quantidadeCalca);

                printf("escreva a quantidade de cintos comprados\n");
                scanf("%f", &quantidadeCinto);

                valorCompra = (valorCamiseta * quantidadeCamiseta)+(valorCalca*quantidadeCalca)+(valorCinto*quantidadeCinto);
                valorDesconto = 0.1 * valorCompra;
                valorComDesconto = valorCompra - valorDesconto;

                //saida de dados
                printf("o valor da compra eh  %.2f e o desconto foi de %.2f", valorComDesconto, valorDesconto);
                return 0;
            }
