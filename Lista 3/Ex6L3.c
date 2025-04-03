#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

//Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
//disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
//um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
//soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
//que o programa venceu

int aposta, n1, nrand, resultado;
printf("Digite 1 para apostar em PAR ou 0 para apostar em IMPAR\n");
scanf(" %d", &aposta);

printf("Digite um numero de 0 a 5\n");
scanf(" %d", &n1);

nrand = rand() % 6;

printf(" o numero sorteado foi %d\n", nrand);

resultado = n1 + nrand;
printf(" soma foi %d\n", resultado);

if ((resultado%2) == 0 && aposta == 1)
    {
        printf("O numero eh par e voce venceu\n");
    } else if ((resultado%2) != 0 && aposta == 0)
    {
        printf("O numero eh impar e voce venceu\n");
    } else if ((resultado%2) == 0 && aposta == 0)
    {
        printf("O numero eh par e voce perdeu\n");
    } else if ((resultado%2) != 0 && aposta == 1)
    {
        printf("O numero eh impar e voce perdeu\n");
    }

    return 0;
}