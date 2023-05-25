#include <stdio.h>

int main(){
    int vet[10] = {2,4,35,50,23,17,9,12,27,5};
    float soma;

    //Média
    for (int i = 0; i < 10; i++){
        soma += vet[i];
    }
    float media = soma / 10;
    printf("Media = %.2f", media);
    printf("\n");

    //Maior valor
    int maior = vet[0];
    for (int i = 0; i < 10; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("Maior valor = %d", maior);
    printf("\n");

    //Ordem crescente
    int aux;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    //Imprime vetor
    printf("Ordem crescente: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

    //Números Primos
    int primo;
    printf("Numeros primos: \n");
    for (int i = 0; i < 10; i++){
        primo = 1;
        for (int j = 2; j < vet[i]; j++){
            if (vet[i] % j == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1 && vet[i] > 1){
            printf("%d e primo\n", vet[i]);
        }
    }

    return 0;
}