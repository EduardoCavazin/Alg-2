#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    float dmaior, dmenor, area;

    printf("Insira a diagonal maior: ");
    scanf("%f", &dmaior);
    printf("Insira a diagonal menor: ");
    scanf("%f", &dmenor);

    area = (dmaior*dmenor)/2;

    printf("A area e: %.2f", area);
    return 0;
}