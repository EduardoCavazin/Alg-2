#include <stdio.h>
#include <conio.h>

int main()
{
    float num1, num2, media;

    printf("Insira o primeiro nummero: ");
    scanf("%f", &num1);
    printf("Insira o segundo nummero: ");
    scanf("%f", &num2);

    media = (num1+num2)/2;

    printf("A media e: %.1f", media);

    return 0;
}