#include <stdio.h>
#include <conio.h>

int main ()
{
    int a, b, soma;
    
    printf("Insira o primeiro nummero: ");
    scanf("%d", &a);
    printf("Insira o segundo nummero: ");
    scanf("%d", &b);

    soma = a+b;

    printf("A soma e: %d", soma);
    return 0;
}