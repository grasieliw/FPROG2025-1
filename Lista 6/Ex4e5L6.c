#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
10. Calcule as somas:
    a. dos elementos da segunda linha
    b. dos elementos da quinta coluna
    c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
    d. dos elementos só das colunas com índices pares
    e. dos elementos só das linhas com índices ímpares
*/

int main(){

int M[4][6];
int somaSegundaLinha=0, somaQuintaColuna=0, somaColunaPar = 0, somaLinhaImpar = 0, somaMultiplicacao=0;
int maior = -10, menor=10;

srand(time(NULL));


for (int i = 0; i <=3; i++){
        for (int j = 0; j <=5; j++)
        {
            M[i][j] = (rand() % 21) - 10; 
            
            //encontrar maior numero
            if (M[i][j] > maior){
                maior = M[i][j];
            }
            
            //encontrar menor numero
            if (M[i][j] < menor){
                menor = M[i][j];
            }

            //soma elementos segunda linha
            if(i==1){
                somaSegundaLinha+=M[i][j];
            }

            //soma elementos quinta coluna
            if (j==4){
                somaQuintaColuna += M[i][j];
            }
            //soma elementos de colunas pares
            if ((j+1) % 2 ==0){
                somaColunaPar += M[i][j];
            }

            //soma linha com indice impar
            if ((i+1) % 2 != 0){
                somaLinhaImpar += M[i][j];
            }            
        }
}

//multiplicacao dos elementos da primeira linha pelos elementos da quarta linha
for (int j = 0; j < 6; j++) {
        somaMultiplicacao += M[0][j] * M[3][j];
}

// Mostrar os resultados
printf("Matriz M:\n");
    for (int i = 0; i<= 3; i++) {
        for (int j = 0; j <= 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nResultados:\n");
    printf("a) Soma dos elementos da segunda linha: %d\n", somaSegundaLinha);
    printf("b) Soma dos elementos da quinta coluna: %d\n", somaQuintaColuna);
    printf("c) Soma da multiplicacao dos elementos da primeira linha pelos da quarta linha: %d\n", somaMultiplicacao);
    printf("d) Soma dos elementos das colunas com indices pares: %d\n", somaColunaPar);
    printf("e) Soma dos elementos das linhas com indices impares: %d\n", somaLinhaImpar);
    printf("\n\n5) Maior numero: %d\n", maior);
    printf("5) Menor numero: %d\n", menor);






    return 0;
}