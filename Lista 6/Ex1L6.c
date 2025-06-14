#include <stdio.h>

/*
Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa
que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o
seguinte resultado:
*/

int main(){

    //vetores
    int v1[5] = {1, 5, 9, 2, 5};
    int v2[5] = {7, 4, 13, 21, 6};
    int v3[5] = {8, -3, 5, 7, 12};
    int M[3][5];

    for (int i = 0; i <= 2; i++){            //percorre as linhas - 1 até 3
    
        for (int j = 0; j <= 4; j++) {
            if (i==0){
                M[i][j] = v1[j];
            } else if(i==1){
                M[i][j] = v2[j];
            } else {
                M[i][j] = v3[j];
            }
        }
    }

    // Exibindo matriz M
    printf("Matriz M:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}