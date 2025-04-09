#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
int dado;

printf("Quantas faces o dado deve ter?\n Opcoes: 4, 6, 8, 10, 12 ou 16\n");
scanf("%d", &dado);

int resultado;
resultado = 1 + rand() % dado;

printf("Resultado: %d", resultado);
}