#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

/*
Implemente uma função sortear que receba o intervalo de valores inteiros início e
fim como parâmetro, sorteie e retorne um número dentro do intervalo (considerando intervalo
fechado [início, fim]).
*/


int sortear(int min, int max){

    return min + rand() % (max - min + 1);

}


int main(){

    srand(time(NULL)); 
    int numeroSorteado = sortear(1, 10);

    printf("%d", numeroSorteado);


    return 0;
}

