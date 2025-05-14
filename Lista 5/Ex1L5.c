#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numeros[10], numerosOposto[10], vPares[10], vImpares[10];
    int soma = 0, quantValor = 0, maior = 10, menor = 90, resto = 1, p=0, t=0;
    double produto = 1;
    srand(time(NULL));

    for (int i = 0; i <= 9; i++) {
        numeros[i] = 10 + rand() % (90 - 10 + 1);             //sortear um numero entre 10 e 90

        printf("\nNumero %d: %d \n", (i+1), numeros[i]);        //imprime os numeros sorteados

        soma += numeros[i];
        produto *= numeros[i];

        //validacao caso tenha o numero 50
        if (numeros[i] == 50)  {                              
            quantValor ++;
            printf("Encontrou o numero 50 - Quantidade %d\n\n", quantValor);
        }

        //validacao do maior numero
        if (numeros[i] > maior){
            maior = numeros[i];
        }

        //validacao do menor numero
        if (numeros[i] < menor){
            menor = numeros[i];
        }

        //validacao dos numeros pares
        resto = numeros[i] % 2;
        if (resto == 0) {
            vPares[p]= numeros[i];
            printf("\nNumero par: %d", vPares[p]);
            p++;
        } else {
            vImpares[t] = numeros[i];
            printf("\nNumero impar: %d", vImpares[t]);
            t++;
        }
       // resto = 1;
       
        
    }

    //media
    int media = soma/10;
    printf("\n\nA media dos numeros sorteados eh %d\n", media);

    //impressao do maior e menor numero
    printf("\nO maior numero eh %d e o menor numero eh %d", maior, menor);

    //impressao da soma e produto acumulado dos valores dos elementos do vetor
    printf("\nA soma dos numeros sorteados eh %d\n", soma);
    printf("\nO produto dos numeros sorteados eh %.2lf\n\n", produto);

     for (int i = 9; i >= 0; i--) {
        numerosOposto[9-i] = numeros[i];
        printf("Numero  %d: %d \n", (i+1), numeros[i]);
     }
     

    return 0;
}