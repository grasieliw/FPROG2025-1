#include <stdio.h>

int main(){

int numero, resultado, tentativas;                                      //inicializacao de variaveis

do
{

printf("\nDigite um numero de 1 a 9:");                                 //entrada de dados
scanf("%d", &numero);

        for (int i = 1; i <= 10 ; i++)                                  //gerador dos numeros da tabuada de multiplicacao
    {
        resultado = numero * i;                                         //calculo com for de 1 a 10
        printf("\n%d x %d = %d", numero, i, resultado);
    }

printf("\nDigite 1 para calcular outro numero ou 0 para finalizar: ");  //validacao para continuar os calculos
scanf("%d", &tentativas);

} while (tentativas == 1);                                              //continua os calculos enquanto variavel tem valor 1

printf("\nDesafio finalizado");                                         //saida de dados avisando que o desafio foi finalizado









}