#include <stdio.h>

/*
Escreva um programa que leia dois números inteiros: um representando a base e outro
representando o expoente. O programa deve calcular a potência da base elevada ao
expoente, sem utilizar bibliotecas matemáticas (não pode usar a função pow()). Ao final, o
programa deve exibir o valor da potência.

Observações:
• Caso o expoente seja zero, o resultado deve ser 1 (por definição matemática).               
• Caso o expoente seja negativo, o programa deve calcular a potência normalmente (como
se fosse positivo), e depois exibir o inverso (1 dividido pelo resultado).
• A saída deve ser exibida com 2 casas decimais.
• Base e expoente devem ser do tipo inteiro. O resultado pode ser armazenado em uma
variável do tipo double.
*/

int main(){
//variaveis
int base, expoente, indiceExpoente;
float resultado=1.00;   

//entrada de dados
printf("\nDigite a base: ");
scanf(" %d", &base);

printf("\nDigite o expoente: ");
scanf(" %d", &expoente);


//calculo da potencia
if (expoente >= 0) {                        //caso o expoente seja positivo
    for (int i = 1; i <= expoente; i++) {
        
        if (expoente == 0) {                // caso expoente seja 0 - resultado sempre 1
            resultado = 1;
            break;
        } else resultado = resultado*base;  //caso o expoente seja positivo       
    }
}

if (expoente <0) {                          //caso o expoente seja negativo
    indiceExpoente = -expoente;             //muda o sinal do expoente e armazena em uma segunda variavel
    for (int i = 1; i <= indiceExpoente; i++)
    {
        resultado = resultado*base;         //calcula a potencia como se fosse um expoente positivo
        if (i == indiceExpoente){               
            resultado = 1/resultado;        //calcula o resultado final no caso de expoente negativo
        }
    }
}

//exibicao de resultados
printf("\n%d elevado a %d eh igual a %.2f", base, expoente, resultado);
    return 0;
}