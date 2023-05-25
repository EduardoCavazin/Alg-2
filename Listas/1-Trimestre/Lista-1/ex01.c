#include <stdio.h>
#include <conio.h>

int main ()
{
    float r, d, a, cir;

    printf("Insira o raio do circulo: ");
    scanf("%f", &r);

    d = 2*r;
    a = 3.14159*(r*r);
    cir = 2*3.14159*r;

    printf("Diametro = %.2f\n", d);
    printf("Area = %.2f\n", a);
    printf("Circunferencia = %.2f", cir);
    return 0;
}