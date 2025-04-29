#include <stdio.h>
/*
Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de
um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores.
Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e
exibir uma mensagem indicando o sensor que disparou a ação.
*/
int main(){
//variaveis
float umidade;

//entrada de dados
for (int i = 1; i <= 5; i++) {                                          
    printf("\nDigite a porcentagem de umidade do medidor %d: ", i);         //entrada de dados
    scanf(" %f", &umidade);

    if (umidade <30){                                                       //caso a umidade seja menor que 30
        printf("\nIrrigacao ativada no medidor %d", i);
    } 
}
    return 0;
}