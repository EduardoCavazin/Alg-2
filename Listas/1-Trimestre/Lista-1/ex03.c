#include <stdio.h>
#include <conio.h>

int main ()
{
    float cel, fah;

    printf("Insira a temperatura em Celcius: ");
    scanf("%f", &cel);

    fah = cel*1.8 + 32;

    printf("A temperatura em Fahrenheit e: %.1f", fah);
    return 0;
}