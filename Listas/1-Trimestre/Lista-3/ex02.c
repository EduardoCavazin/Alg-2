#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    float a, b, res;
    b = 0;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    while (b==0){
        printf("Digite o segundo valor: ");
        scanf("%f", &b);
    }

    res = a/b;
    printf("Resultado = %.2f", res);
}