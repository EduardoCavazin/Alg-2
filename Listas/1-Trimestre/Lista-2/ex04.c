#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    float razao, prit, quit;

    printf("Insira a razao da PG: ");
    scanf("%f", &razao);
    printf("Insira o primeiro termo da PG: ");
    scanf("%f", &prit);

    quit = prit*pow(razao, 4);

    printf("O quinto termo e: %.2f", quit);
    return 0;
}