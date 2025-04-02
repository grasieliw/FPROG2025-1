#include <stdio.h>

int main()
{

    int n1, n2, resultado;             //declaração dos dois numeros
 
    printf("Digite o numerador:\n");
    scanf(" %d", &n1);
    printf("Digite o denominador:\n");
    scanf(" %d", &n2);

    if (n2 == 0){
            printf("Denominador invalido.\n");
    } else {

        resultado = n1/n2;
        printf("O resultado da divisao %d / %d eh %d\n", n1, n2, resultado);

    }
    return 0;
}