#include <stdio.h>

int main()
{
//DECLARAÇÃO E IMPRESSÃO DE VARIÁVEIS REAIS
printf("*********IMPRIMINDO VALORES****************\n\n");
float pi = 3.14;
double piDouble = 3.1415926535897932384626433832795;
printf("Valor de PI %.5f\n", pi);
printf("Valor de PI mais  preciso %.7f\n", piDouble);
printf("\n******************************************");

//FORMA EXPONENCIAL
float salarioSonho = 1E6, salarioReal = 10E-3;

//SAÍDA DE VALORES
printf("\n\nSonhei que meu salario era de R$%.2f, mas acordei e lembrei que na verdade eh R$%.2f.\n", salarioSonho, salarioReal);
}
