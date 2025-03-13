
            #include <stdio.h>

            int main()
            {
                //Faca um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo equivalente em
                //segundos na tela
                
                //variaveis
                int tempoMinutos;
                int tempoSegundos;

                //entrada de dados
                scanf("%d", &tempoMinutos);

                tempoSegundos = tempoMinutos * 60;

                //saida de dados
                printf("o tempo em segundos eh %d", tempoSegundos);
                return 0;
}