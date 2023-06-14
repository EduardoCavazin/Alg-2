#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *vetor, int tamanho, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }
}

void inverterVetor(int *vetor, int tamanho){
    int i = 0;
    int j = tamanho - 1;

    while(i < j){
        int aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
        i++;
        j--;
    }
}

void imprimirVetor(int *vetor, int tamanho){
    printf("Vetor gerado:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", vetor[i]);
    }
    printf("\n");
}

int main(){
    int tamanho, min, max;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("Digite o valor maximo: ");
    scanf("%d", &max);
    printf("Digite o valor minimo: ");
    scanf("%d", &min);

    int vetor[tamanho];
    gerarVetor(vetor, tamanho, min, max);

    imprimirVetor(vetor, tamanho);
    inverterVetor(vetor, tamanho);

    printf("Vetor invertido\n");
    imprimirVetor(vetor, tamanho);

    return 0;
}