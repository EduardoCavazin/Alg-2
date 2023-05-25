#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b;

    printf("Insira o primeiro valor: ");
    scanf("%f", &a);
    printf("Insira o segundo valor: ");
    scanf("%f", &b);

    if (a>b)
        printf("O primeiro valor e maior que o segundo");
    else 
        printf("O segundo valor e maior que o primeiro");
    
    return 0;
}