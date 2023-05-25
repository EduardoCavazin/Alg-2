#include <stdio.h>

int main(){
    int lados;
    float tamanhoLados, area;
    
    printf("Digite o numero de lados do poligono: ");
    scanf("%d", &lados);

    printf("Digite o tamanho dos lados: ");
    scanf("%f", &tamanhoLados);

    switch(lados){
        case 3:
            area = (tamanhoLados * tamanhoLados) * 1.73 / 4;
            printf("Area do triangulo: %.2f\n", area);
            break;

        case 4:
            area = tamanhoLados * tamanhoLados;
            printf("Area do quadrado: %.2f\n", area);
            break;

        case 6:
            area = 6 * (tamanhoLados * tamanhoLados) * 1.73 / 4;
            printf("Area do hexagono: %.2f\n", area);
            break;
        
        default:
            printf("Nao sei fazer esse calculo");
            break;
    }
    return 0;
}