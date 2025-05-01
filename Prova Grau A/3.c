#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
O monitoramento de espécies é uma ferramenta fundamental para a conservação da
biodiversidade. No Brasil, animais como o Tatu-Canastra, o Gato-Maracajá e o TamanduáBandeira estão 
entre as espécies ameaçadas de extinção e são frequentemente monitorados
por pesquisadores. Implemente um programa em C para registrar a quantidade de
avistamentos dessas 3 espécies ao longo de 7 dias em uma determinada região de mata.
O programa deve:
    a) Ler os números de avistamentos diários de cada espécie (um número por dia, durante
    7 dias para cada uma).
    b) Mostrar o total de avistamentos de cada espécie nestes 7 dias
    c) Calcular e mostrar a média de avistamentos por espécie.
    d) Informar qual foi a espécie mais avistada e qual foi a menos avistada no total da
    semana.

*/

int main(){
    //variaveis
    int diaTatuCanastra, diaGatoMaracuja, diaTamanduaBandeira;
    int somaTatuCanastra=0, somaGatoMaracuja=0, somaTamanduaBandeira=0;
    int maisAvistada, menosAvistada;
    float mediaTatuCanastra=0.00, mediaGatoMaracuja=0.00, mediaTamanduaBandeira=0.00;

    
    for (int i = 1; i <= 7; i++)
    {
        //entrada de dados
        printf("\nDia %d - Tatu-Canastra: ", i);
        scanf(" %d", &diaTatuCanastra);

        printf("Dia %d - Gato-Maracuja: ", i);
        scanf(" %d", &diaGatoMaracuja);

        printf("Dia %d - Tamandua Bandeira: ", i);
        scanf(" %d", &diaTamanduaBandeira);

        //soma de cada especie na semana
        somaTatuCanastra += diaTatuCanastra;
        somaGatoMaracuja += diaGatoMaracuja;
        somaTamanduaBandeira += diaTamanduaBandeira;
    }

        //calculo da media de cada especie na semana
        mediaTatuCanastra = (float)somaTatuCanastra/7;
        mediaGatoMaracuja = (float)somaGatoMaracuja/7;
        mediaTamanduaBandeira = (float)somaTamanduaBandeira/7;

        //calculo da especie mais avistada
        char *nomeMaisAvistado = malloc(32);
        maisAvistada = somaTatuCanastra;
        strcpy(nomeMaisAvistado, "Tatu-Canastra");

        if (somaGatoMaracuja > maisAvistada) {
            maisAvistada = somaGatoMaracuja;
            strcpy(nomeMaisAvistado, "Gato-Maracuja");}

        if (somaTamanduaBandeira > maisAvistada) {
            maisAvistada = somaTamanduaBandeira;
            strcpy(nomeMaisAvistado, "Tamandua Bandeira"); }

        //calculo da especie menos avistada
        char *nomeMenosAvistado = malloc(32);
        menosAvistada = somaTatuCanastra;
        strcpy(nomeMenosAvistado, "Tatu-Canastra");

        if (somaGatoMaracuja < menosAvistada) {
            menosAvistada = somaGatoMaracuja;
            strcpy(nomeMenosAvistado, "Gato-Maracuja");}

        if (somaTamanduaBandeira < menosAvistada) {
            menosAvistada = somaTamanduaBandeira;
            strcpy(nomeMenosAvistado, "Tamandua Bandeira"); }


        //exibicao de resultados
        printf("\n\nTotal de avistamentos: ");
        printf("\nTatu-Canastra: %d", somaTatuCanastra);
        printf("\nGato-Maracuja: %d", somaGatoMaracuja);
        printf("\nTamandua Bandeira: %d", somaTamanduaBandeira);

        printf("\n\nMedia de avistamentos: ");
        printf("\nTatu-Canastra: %.2f", mediaTatuCanastra);
        printf("\nGato-Maracuja: %.2f", mediaGatoMaracuja);
        printf("\nTamandua Bandeira: %.2f", mediaTamanduaBandeira);

        printf("\n\nEspecie mais avistada: %s", nomeMaisAvistado);
        printf("\nEspecie menos avistada: %s", nomeMenosAvistado);

    return 0;
}