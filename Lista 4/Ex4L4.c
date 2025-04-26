#include <stdio.h>


int main(){

//variaveis
int divisor, inicio_intervalo, final_intervalo, n_divisiveis=0;

//entrada de dados
printf("\nDigite o valor do divisor: ");
scanf(" %d", &divisor);

printf("\nInicio do intervalo: ");
scanf(" %d", &inicio_intervalo);

printf("\nFinal do intervalo: ");
scanf(" %d", &final_intervalo);


//ciclo para calcular os numeros divisiveis
for (int i = inicio_intervalo; i <= final_intervalo; i++)
{
    if ((i%divisor) == 0)
    {
        n_divisiveis++;
    }
}

printf("\nNumeros divisiveis por %d no intervalor de %d a %d: %d", divisor, inicio_intervalo, final_intervalo, n_divisiveis);




    return 0;
}