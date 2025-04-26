#include <stdio.h>

int main (){

    //entrada de dados
    int numero=1, i=1;
    int status=1;
    char caracter;

    printf("Digite um numero: ");
    scanf(" %d", &numero);

    printf("\n Digite um caracter: ");
    scanf(" %c", &caracter);

    for (int i = 1; i <= numero; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%c ", caracter);
        }
        printf("\n");
    }
  
}
   
    
