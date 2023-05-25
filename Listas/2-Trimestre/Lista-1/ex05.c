#include <stdio.h>

float media (float a, float b, float c){
    float media;

    media = (a + b + c) / 3;

    return media;
}

int main(){
    float a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    printf("A media e %0.2f\n", media(a, b, c));

    return 0;
}