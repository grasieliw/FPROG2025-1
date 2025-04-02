#include <stdio.h>

int main()
{

    //Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A + C

    int a, b, c;
 
    printf("Digite o numero A:\n");
    scanf(" %d", &a);
    printf("Digite o numero B:\n");
    scanf(" %d", &b);
    printf("Digite o numero C:\n");
    scanf(" %d", &c);

    if ((a+b) < (a+c)){
            printf("O valor de A+B %d eh menor que A+C %d\n", (a+b), (a+c));
    } else {
        printf("O valor de A+B nao eh menor que A+C");
    }
    return 0;
}