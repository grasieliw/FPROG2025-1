#include <stdio.h>

//Faça um programa que leia números inteiros até que o usuário digite 0. No final, imprima a
//porcentagem de números positivos, negativos, divisíveis por 2, e divisíveis por 5.

int main(){
int numero = __INT_MAX__, positivos=0, negativos=0, divisivel2=0, divisivel5=0, total=0;
float porc_pos = 0, porc_neg =0, porc_div2=0, porc_div5=0;

while (numero != 0)
{
    printf("Digite um numero inteiro: ");
    scanf(" %d", &numero);
    fflush(stdin);
    total++;

    if (numero > 0){
        positivos++;
    }
    else if (numero < 0){
        negativos++;
    }

    if (numero % 2 == 0) {
        divisivel2++;
    }
    if (numero % 5 == 0) {
        divisivel5++;
    }
}
porc_pos = ((float)positivos/total)*100;
porc_neg = ((float)negativos/total)*100;
porc_div2 = ((float)divisivel2/total)*100;
porc_div5 = ((float)divisivel5/total)*100;
printf("Positivos: %.2f\nNegativos: %.2f\nDivisiveis por 2: %.2f\nDivisiveis por 5: %.2f\n", porc_pos, porc_neg, porc_div2, porc_div5);
}