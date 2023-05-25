#include <stdio.h>

float soma(float a, float b){
    float soma;

    soma = a + b;

    return soma;
}

int main(){
     float a, b;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("A soma e %0.2f\n", soma(a, b));

    return 0;
}