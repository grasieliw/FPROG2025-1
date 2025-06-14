#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a
informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e
segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores
como nota do Grau A e do Grau B.
*/

int main(){

float M[10][3];

srand(time(NULL));

for (int i = 0; i < 10; i++){
    for (int j = 0; j < 3; j++){
        if (j==0 || j==1){
            float num_0_1 = rand() / (float)RAND_MAX;
            float num_0_10 = num_0_1 * 10;

            M[i][j]= num_0_10;
        }

        if (j==2){
            M[i][j] = (M[i][0] + (2*M[i][1]))/3;
        }
    }
    
}

// Mostrar os resultados
printf("Grau A - Grau B - Grau Parcial:\n");
    for (int i = 0; i< 10; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", M[i][j]);
        }
        printf("\n");
    }


    return 0;
}