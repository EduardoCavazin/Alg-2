#include <stdio.h>

float trocaVariavel(float a, float b){
    float aux;
    
    aux = a;
    a = b;
    b = aux;

    printf("Primeiro valor: %0.2f\n", a);
    printf("Segundo valor: %0.2f\n", b);

    return 0;
}

int main(){
    float a, b;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    trocaVariavel(a, b);
}
