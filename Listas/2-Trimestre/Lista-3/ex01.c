#include <stdio.h>
#include <math.h>

void trocaNum(int *a, int *b){
    int aux = *a;
    
    printf("Troca de valores\n");
    *a = *b;
    *b = aux;
}

void increDecre(int *a, int *b){
    printf("Incremento e decremento\n");
    *a += 1;
    *b -= 1;
}

void calculaCirculo(int raio, float *perimetro, float *area){
    *perimetro = 2 * 3.14 * raio;
    *area = 3.14 * raio * raio;
}

void calculoQuadrado(int lado, float *perimetro, float *area){
    *perimetro = 4 * lado;
    *area = lado * lado;
}

int eqSegundoGrau(int a, int b, int c, float *x1, float *x2){
    float delta = b*b - 4*a*c;

    if(delta < 0){
        //Não existem raizes
        return 0;
    }else if(delta == 0){
        //Apenas uma raiz
        *x1 = *x2 = -b / (2 * a);
        return 1;
    }else{
        //Duas raizes
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    } 

}

int main(){
    int a, b, c, raio, lado;
    float perimetro, area, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    trocaNum(&a, &b);
    printf("A: %d\nB: %d\n", a, b);

    increDecre(&a, &b);
    printf("A: %d\nB: %d\n", a, b);

    printf("\n");

    printf("Digite o valor do raio: ");
    scanf("%d", &raio);
    calculaCirculo(raio, &perimetro, &area);
    printf("Perimetro: %.2f\nArea: %.2f\n", perimetro, area);

    printf("\n");

    printf("Digite o valor do lado: ");
    scanf("%d", &lado);
    calculoQuadrado(raio, &perimetro, &area);
    printf("Perimetro: %.2f\nArea: %.2f\n", perimetro, area);

    printf("\n");

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    int raizes = eqSegundoGrau(a, b, c, &x1, &x2);

    if (raizes == 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (raizes == 1) {
        printf("A equacao possui uma raiz real: x = %.2f\n", x1);
    } else {
        printf("A equacao possui duas raizes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}