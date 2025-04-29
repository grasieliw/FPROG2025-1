#include <stdio.h>
/*
Imagine que você está administrando uma fazenda de abelhas. A cada mês, a colmeia inicial
dobra de tamanho, mas 3% das abelhas migram para outras colmeias devido às mudanças
sazonais. Escreva um programa que leia o número de meses e a população inicial da colmeia,
e exiba a população ao final de cada mês, considerando a migração.
*/
int main(){
    //variaveis
    float populacao;
    int numeroMeses;


    //entrada de dados
    printf("Digite o numero de meses: ");
    scanf(" %d", &numeroMeses);

    printf("Digite a populacao inicial: ");
    scanf(" %f", &populacao);

    //calculo da migracao

    for (int i = 1; i <= numeroMeses; i++) {
        
        populacao = populacao*2;                        //dobrar a populacao   
        populacao = populacao - (populacao * 0.03);     //calculo da populacao menos a migracao
        printf("Mes %d - populacao final foi de %.2f abelhas\n", numeroMeses, populacao);
    }
    
    return 0;
}