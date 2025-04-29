#include <stdio.h>
/*
Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios
diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o
exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7
dias consecutivos e calcule:
a. O total de tempo exercitado na semana.
b. A média de tempo diário.
c. O dia em que o paciente realizou o maior tempo de exercício.
*/
int main(){
//variaveis
int tempoExercicioDia, diaMaiorTempo = 1, maiorTempo, somaExercicioSemana=0, mediaSemana;

//entrada de dados
for (int i = 1; i <= 7; i++){
    printf("\nDigite o tempo de exercicios do dia %d: ", i);
    scanf(" %d", &tempoExercicioDia);

    //calculo do tempo total exercitado na semana
    somaExercicioSemana += tempoExercicioDia;                   //soma todos os tempos de cada dia

    
    //o dia que o paciente realizou o maior tempo de exercicio
    if(i==1) maiorTempo = tempoExercicioDia;                    //se for o primeiro dia, seta o maior tempo para o valor daquele dia
    if (tempoExercicioDia > maiorTempo) {                       // se o tempo do dia for maior que o tempo maior, ajusta o novo maior tempo
        maiorTempo = tempoExercicioDia;
        diaMaiorTempo = i;
    }
}
//calculo da media de tempo diario
mediaSemana = somaExercicioSemana/7;

//resultados
printf("\nTotal de tempo exercitado na semana: %d\nMedia de tempo diario: %d\nDia de maior tempo de exercicio: %d\n", somaExercicioSemana, mediaSemana, diaMaiorTempo);




    return 0;
}