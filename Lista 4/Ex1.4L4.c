#include <stdio.h>

//Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente

int main (){

for (int i = 25; i <= 95; i++)
{
    if (i%2 !=0)
    {
        printf(" %d\n", i);
    }
}

}