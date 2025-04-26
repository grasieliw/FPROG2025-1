#include <stdio.h>

/*
Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
média geral dos alunos.
*/

int main(){

    //variaveis
    int nAlunos=0;
    float grauA, grauB, grauC, media=0.0, mediaFinal=0.0, somaNotas=0.0;
    char nota_troca = '\0';

    //entrada de dados
    printf("\nDigite a quantidade de alunos: ");
    scanf(" %d", &nAlunos);

    for (int i = 1; i <= nAlunos; i++)
    {
        printf("\nCalculo do aluno %d:", i);                // calculo primeiro aluno
        printf("\nDigite sua nota do grau A: ");
        scanf(" %f", &grauA);

        printf("\nDigite sua nota do grau B: ");
        scanf(" %f", &grauB);

        //calcular media
        media = (grauA + 2*grauB)/3;            

        if (media >= 6)                                     // se a media for maior que 6 - aprovado
        {
            printf("\nAPROVADO - media %.2f", media);
        } else{                                             //algoritmo para calcular grau C
            printf("\nDigite sua nota do grau C: ");
            scanf(" %f", &grauC);

            printf("\nDigite qual nota quer substituir (A ou B): ");
            scanf(" %s", &nota_troca);

            if (nota_troca == 'A' || nota_troca == 'a')     //caso queira substituit grau A
            {
                media = (grauC + 2*grauB)/3;
                (media >= 6) ? printf("\nAPROVADO - media %.2f", media) : printf("\nREPROVADO - media %.2f", media);                //imprime o resultado baseado na media final calculada
                
            }
            if (nota_troca == 'B' || nota_troca == 'b')     //caso queira substituit grau B
            {
                media = (grauA + 2*grauC)/3;
                (media >= 6) ? printf("\nAPROVADO - media %.2f", media) : printf("\nREPROVADO - media %.2f", media);                //imprime o resultado baseado na media final calculada
                
            }
            
            
        }
        somaNotas = somaNotas + media;                          //soma as notas de todos os alunos
    }
    mediaFinal = somaNotas/nAlunos;                             //calcula a media final dos alunos
    printf("\nMedia final da turma: %.2f", mediaFinal);         //imprime o resultado final de todos os alunos
    return 0;
}