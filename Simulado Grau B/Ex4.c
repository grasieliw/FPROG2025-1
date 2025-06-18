#include <stdio.h>

/*
Programa “Cebolinha”: ler uma string (array de char) e converter todos os r's em
l's.
*/

int main(){

char myString[100];
printf("Digite uma palavra ou frase: ");
fgets(myString, sizeof(myString), stdin);

for (int i = 0; myString[i]!= '\0'; i++)
{
    if (myString[i] == 'r'){
        myString[i] = 'l';
    }
}

printf("String digitada com alterações: %s", myString);



    return 0;
}