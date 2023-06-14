#include <stdio.h>
#include <math.h>

void convertePolar(float x, float y, float *r, float *s){
    *r = sqrt(x * x + y * y);
    *s = atan2(y, x);
}

int main(){
    int numCoord;
    float x, y, r, s;

    printf("Insira a quantidade de coordenadas a serem convertidas: ");
    scanf("%d", &numCoord);

    for(int i = 0; i < numCoord; i++){
        
        printf("Digite a coordenada X: ");
        scanf("%f", &x);
        printf("Digite a coordenada Y: ");
        scanf("%f", &y);

        convertePolar(x, y, &r, &s);

        printf("Coordenadas polares (r, s): %.2f, %.2f\n", r, s);
        printf("\n");

    }
    return 0;
}