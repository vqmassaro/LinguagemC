#include <stdio.h>

int main ()
{
    printf("-------------MODIFICADORES DO TIPO INTEIRO---------------\n\n");
    //printf("O tamanho do inteiro em meu computador eh: %d bytes.\n", sizeof(int));
    printf("int: %d bytes\n", sizeof(int));
    printf("short: %d bytes\n", sizeof(short));
    printf("long: %d bytes\n\n", sizeof(long));

    //DECLARANDO E IMPRIMINDO VARIAVEL DO TIPO INT
    printf("-------------VISUALIZAR VALORES---------------\n\n");

    //VARIÁVEIS
    int idade = 36, mes = 7, dedos = 10;

    //SAÍDA
    printf("Sua idade eh %d anos.\n", idade);

    printf("Julho eh o mes %d.\n", mes);

    printf("Temos %d dedos nas maos.\n", dedos);
}
