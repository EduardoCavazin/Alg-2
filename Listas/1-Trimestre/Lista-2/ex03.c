#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    float razao, prit, dect;

    printf("Insira a razao da PA: ");
    scanf("%f", &razao);
    printf("Insira o primeiro termo da PA: ");
    scanf("%f", &prit);

    dect = prit+9*razao;

    printf("O decimo termo e: %.2f", dect);
    return 0;
}