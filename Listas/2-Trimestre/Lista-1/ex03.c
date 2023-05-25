#include <stdio.h>

float maiorValor(float a, float b){
    if (a > b){
        printf("%0.2f e maior que %0.2f\n", a, b);
    }else{
        printf("%0.2f e maior que %0.2f\n", b, a);
    }

    return 0;
}

int main(){
    float a, b;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    maiorValor(a, b);

    return 0;
}