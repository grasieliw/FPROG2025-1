#include <stdio.h>

/*
Correção de provas objetivas: faça um programa que permita cadastrar um vetor com
o gabarito de uma prova objetiva contendo 10 questões, cujos resultados podem ser de ‘a’ a ‘f’.
Depois disso, permita ao usuário a opção de entrar com as respostas dadas por um estudante.

a) Contabilizar o número de respostas certas e dar a pontuação final, de 0 a 10.
b) Durante o processo de correção, imprimir na tela quais questões foram acertadas e quais o
estudante errou. Neste caso, deve-se imprimir a resposta correta.
*/

int main(){

char gabarito[10] = {'a', 'f', 'c', 'd', 'd', 'a', 'e', 'e', 'b', 'a'};
char respostasAluno[10]={};
int countAcertos=0;


for (int i = 0; i < 10; i++){
    scanf(" %c", &respostasAluno[i]);

    if (respostasAluno[i] == gabarito[i]){
        printf("\nQuestão %d: resposta correta\n", (i+1));
        countAcertos++;
    } else{
        printf("\nQuestão %d: resposta incorreta. A resposta certa era %c\n", (i+1), gabarito[i]);
    }
}

printf("\n\n A pontuação do estudante eh %d/10", countAcertos);


    return 0;
}