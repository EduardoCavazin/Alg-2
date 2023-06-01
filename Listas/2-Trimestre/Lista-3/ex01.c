#include <stdio.h>

int a, b;

void calculadoraValor(int x, int y){
    printf("Calular por valor:\n");
    printf("Soma %d\n", x + y);
    printf("Multiplicacao %d\n", x * y);
    printf("\n");
}

void calculadoraRef(int *x, int *y){
    printf("Calular por referencia:\n");
    printf("Soma %d\n", *x + *y);
    printf("Multiplicacao %d\n", *x * *y);
    printf("\n");
}

void calculaSParametro(){
    printf("Calcular sem parametro:\n");
    printf("Soma %d\n", a + b);
    printf("Multiplicacao %d\n", a * b);
    printf("\n");
}

int main(){

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("\n");

    calculadoraValor(a, b);
    calculadoraRef(&a, &b);
    calculaSParametro();

    return 0;
}
