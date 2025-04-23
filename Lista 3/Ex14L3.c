#include <stdio.h>

/*Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
conforme a seguinte tabela:
a) crianças com menos de 10 anos pagam R$100;
b) dependentes com idade entre 10 e 30 anos pagam R$220;
c) dependentes com idade entre 31 e 60 anos pagam R$ 395; e
d) dependentes com mais de 60 anos pagam R$ 480.*/

int main(){

float total = 300.0;
int num_dep;


printf("Insira o numero de dependentes com menos de 10 anos:");
scanf(" %d", &num_dep);
total += num_dep *100.0;

printf("\nInsira o numero de dependentes entre 10 e 30 anos:");
scanf(" %d", &num_dep);
total += num_dep *220.0;

printf("\nInsira o numero de dependentes entre 31 e 60 anos:");
scanf(" %d", &num_dep);
total += num_dep *395.0;

printf("\nInsira o numero de dependentes com mais de 60 anos:");
scanf(" %d", &num_dep);
total += num_dep *480.0;

printf("O valor total do plano de saude eh %.2f\n", total);

}