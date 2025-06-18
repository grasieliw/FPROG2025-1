#include <stdio.h>

/*
Implemente um programa que, dado uma matriz 5x5 preenchida com valores entre 0 e
4, faça a contagem de quantos valores de cada um dos números possíveis esta matriz contém.
*/

int main(){

int M[5][5]={ 0, 4, 3, 2, 1,
              1, 0, 2, 4, 0,
              3, 2, 4, 4, 0,
              1, 2, 3, 4, 0,
              0, 0, 0, 1, 2 
            };

int quant4=0, quant3=0, quant2=0, quant1=0, quant0=0;

for (int i = 0; i < 5; i++){
    
    for (int j = 0; j < 5; j++){
        
        if (M[i][j] == 0){
            quant0++;
        } else if (M[i][j] == 1){
            quant1++;
        } else if (M[i][j] == 2){
            quant2++;
        } else if (M[i][j] == 3){
            quant3++;
        } else if (M[i][j] == 4){
            quant4++;
        }
    }
}

printf("\n Quantidade de valores 0: %d", quant0);
printf("\n Quantidade de valores 0: %d", quant1);
printf("\n Quantidade de valores 0: %d", quant2);
printf("\n Quantidade de valores 0: %d", quant3);
printf("\n Quantidade de valores 0: %d", quant4);



    return 0;
}