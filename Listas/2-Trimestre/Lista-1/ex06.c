#include <stdio.h>

float maiorNum(float a, float b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    float a, b;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("O maior valor e: %0.2f\n", maiorNum(a, b));

    return 0;
}