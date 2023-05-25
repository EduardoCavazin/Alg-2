#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    float cato, cata, hip;

    printf("Insira o cateto oposto: ");
    scanf("%f", &cato);
    printf("Insira o cateto adjacente: ");
    scanf("%f", &cata);

    hip = sqrt((cato*cato) + (cata*cata));

    printf("Hipotenusa = %.2f", hip); 
    return 0;
}