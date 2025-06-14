#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
programa que:
        a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
        acumulada de um jogador.
        b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
        c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
        d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
        mensagem de "Rodada de Destaque" para esse jogador.
        e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
        f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).
*/

int main(){

    int pontuacaoJogador[4]={0}, count=0, numero=0;
    int maiorPontuacao = pontuacaoJogador[0];
    int vencedor = 0;
    int empate = 0;

    for (int i = 1; i <= 5; i++){
        printf("\n\n--- Rodada %d ---", i);

       for (int count = 0; count < 4; count++) {
            numero = rand() % 101; // Sorteia entre 0 e 100
            pontuacaoJogador[count] += numero;

            printf("\nJogador %d fez %d pontos nesta rodada", count + 1, numero);

            if (numero >= 80) {
                printf(" -> Rodada de Destaque para o Jogador %d!", count + 1);
            }
        }        
    }

    for (int i = 0; i < 4; i++) {
        printf("\nJogador %d: %d pontos", i + 1, pontuacaoJogador[i]);

        if (pontuacaoJogador[i] > maiorPontuacao) {
            maiorPontuacao = pontuacaoJogador[i];
            vencedor = i;
            empate = 0;
        } else if (pontuacaoJogador[i] == maiorPontuacao && i != vencedor) {
            empate = 1;
        }
    }

    // Resultado final
    if (empate) {
        printf("\n\nResultado: Houve um EMPATE!\n");
    } else {
        printf("\n\nVencedor: Jogador %d com %d pontos!\n", vencedor + 1, maiorPontuacao);
    }
    
    
    return 0;
}