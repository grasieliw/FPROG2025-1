#include <stdio.h>

int main (){
//Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
//deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
//segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é
//318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20

float salario, desconto;

printf("Digite o seu salario:");
scanf(" %f", &salario);

if (((318.20*100)/salario) < 11){
    desconto = 318.20;
    printf("O desconto sera de %.2f e seu salario eh maior que a faixa", desconto);
} else{
    desconto = ((salario*11)/100);
    printf("O desconto sera de %.2f", desconto);
}




    return 0;
}