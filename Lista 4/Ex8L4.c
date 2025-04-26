#include <stdio.h>

int main(){


    int nfatorial, resultado =1, tentativas = 1;
    do
    {

        printf("\nDigite um numero:");                                           //entrada de dados
        scanf("%d", &nfatorial);

                for (int i = 2; i <= nfatorial ; i++)                            //loop do 2 até o numero de entrada                            
                {
                    resultado = resultado * i;                                   //calcula a fatorial
                }
        printf("\nO fatorial de %d eh %d", nfatorial, resultado);

        printf("\nDigite 1 para calcular outro numero ou 0 para finalizar: ");  
        scanf("%d", &tentativas);
        resultado = 1;

    } while (tentativas == 1);                                              //continua os calculos enquanto variavel tem valor 1

    return 0;
}