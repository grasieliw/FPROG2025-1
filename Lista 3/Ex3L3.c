#include <stdio.h>

int main (){
//Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado

    int n1;

    printf("Digite um numero:\n");
    scanf(" %d", &n1);

    if (n1 >= 0){
        printf("O dobro do numero eh %d", (n1*2));
    } else {
        printf("O triplo do numero eh %d", (n1*3));
    }

    return 0;
}