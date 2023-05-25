#include <stdio.h>

int main(){
    float prod[5];

    for(int i =0; i<5; i++){
        printf("Insira o preco do %d produto: ", i+1);
        scanf("%f", &prod[i]);
    }
    printf("Atualizacao de 10 porcento: ");
    for(int i =0; i<5; i++){
        prod[i] += prod[i]*0.1;
        printf("%.2f R$\n", prod[i]);
    }
}