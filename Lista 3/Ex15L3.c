#include <stdio.h>

/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
1 - À vista em dinheiro, recebe 15% de desconto
2 - À vista no cartão de crédito, recebe 10% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%*/



int main(){

float preco_etiqueta, total;
int opcao_menu = 0;

printf("Insira o preco de etiqueta do produto: ");
scanf(" %f", &preco_etiqueta);

printf("Escolha a condicao de pagamento:\n ");
printf("1 - A vista em dinheiro, recebe 15%% de  desconto\n 2 - A vista no cartão de credito, recebe 10%% de desconto\n 3 - Em duas vezes, preco normal de etiqueta sem juros\n 4 - Em tres vezes, preco normal de etiqueta mais juros de 10%%");
scanf(" %d", &opcao_menu);

switch (opcao_menu)
{
case 1:
    total = preco_etiqueta * 0.85;
    printf("\n O preco total para pagar eh: %.2f\n", total);
    break;

case 2:
    total = preco_etiqueta * 0.90;
    printf("\n O preco total para pagar eh: %.2f\n", total);
    break;

case 3:
    total = preco_etiqueta * 0.50;
    printf("\n Em duas vezes sem juros de %.2f\n", total);
    break;

case 4:
    total = (preco_etiqueta * 1.10)/3;
    printf("\n Em tres vezes de %.2f com juros de 10%% no valor do preco de etiqueta\n", total);
    break;

default:
    break;
}

return 0;
}