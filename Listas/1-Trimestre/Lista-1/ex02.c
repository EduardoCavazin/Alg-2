#include <stdio.h>
#include <conio.h>

int main ()
{
    float sal, salnov, bon;

    printf("Insira o salario: ");
    scanf("%f", &sal);
    printf("Insira a porcentagem do bonus: ");
    scanf("%f", &bon);

    bon = bon/100;
    salnov = (bon*sal) + sal;

    printf("O salario novo e de R$%.2f", salnov);
    return 0;
}