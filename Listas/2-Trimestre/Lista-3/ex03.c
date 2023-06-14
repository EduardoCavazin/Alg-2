#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *vetor, int tamanho, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }
}

void maiorMenor(int *vetor, int tamanho, int *maior, int *menor){
    *maior = vetor[0];
    *menor = vetor[0];

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
        if(vetor[i] < *menor){
            *menor = vetor[i];
        }
    }
}

int main(){
    int tamanho, min, max, maior, menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("Digite o valor maximo: ");
    scanf("%d", &max);
    printf("Digite o valor minimo: ");
    scanf("%d", &min);

    int vetor[tamanho];
    gerarVetor(vetor, tamanho, min, max);

    printf("Vetor gerado:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", vetor[i]);
    }
    printf("\n");

    maiorMenor(vetor, tamanho, &maior, &menor);
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
