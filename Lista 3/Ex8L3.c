#include <stdio.h>

int main(){

//Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
//da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
//for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
//tela o valor de venda


float valorProduto;

printf("Qual o valor do seu produto:\n");
scanf(" %f", &valorProduto);

if (valorProduto < 20){
    valorProduto = 1.45*valorProduto;
} else if (valorProduto <= 50 && valorProduto >= 20)
{
    valorProduto = 1.35*valorProduto;
} else if (valorProduto > 50)
{
    valorProduto = 1.25*valorProduto;
}

printf("O valor do produto eh %.2f\n", valorProduto);




    return 0;
}