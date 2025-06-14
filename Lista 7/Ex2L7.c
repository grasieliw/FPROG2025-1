#include <stdio.h>



void exibirTabuada(int numero){

    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d x %d = %d", numero, i, (numero*i));
    }
}

int main(){

    int numero=0;

    printf("Digite o numero para tabuada: ");
    scanf("%d", &numero); 

    exibirTabuada(numero);
    return 0;
}