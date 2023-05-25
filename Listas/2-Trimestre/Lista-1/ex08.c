#include <stdio.h>

int areaCirc(float r){
    float area;

    area = 3.14 * (r * r);

    printf("A area do circulo e %0.2f\n", area);

    return 0;
}

int main(){
    float r;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    areaCirc(r);

    return 0;
}