#include <stdio.h>

void somaBit(int b1, int b2, int *vaiUm, int *soma){
    *soma = b1 ^ b2 ^ *vaiUm;
    *vaiUm = (b1 & b2) | (b1 & *vaiUm) | (b2 & *vaiUm);
}

int main(){
    int b1, b2, vaiUm, soma;

    printf("Digite o valor do bit 1 (0 ou 1): ");
    scanf("%d", &b1);
    printf("Digite o valor do bit 2 (0 ou 1): ");
    scanf("%d", &b2);
    printf("Digite o valor do vai um (0 ou 1): ");
    scanf("%d", &vaiUm);

    somaBit(b1, b2, &vaiUm, &soma);

    printf("Soma: %d\n", soma);
    printf("Vai um: %d\n", vaiUm);

    return 0;
}