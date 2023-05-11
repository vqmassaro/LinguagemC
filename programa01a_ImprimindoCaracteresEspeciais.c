//Curso C progressivo: A função printf() - alguns caracteres especiais
//
//data: 03/05/2023

#include <stdio.h>

int main(void)
{
    //IMPRIMIR CARACTERES ESPECIAIS
    printf("Aspas duplas \" \n");
    printf("Barra: \\ \n\n");

    //RETORNAR CURSOR PARA O INICIO DA LINHA
    printf("O cursor voltou para o inicio com o \\r \r");
    getchar(); //Espera o usuário digitar algo

    //TABULAÇÃO HORIZONTAL
    printf("\nAntes do \\t \t depois do \\t\n");

    //AVISO SONORO
    printf("\7 \a");
    return 0;
}
