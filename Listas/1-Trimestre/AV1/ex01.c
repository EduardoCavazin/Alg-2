#include <stdio.h>

int main (){
    //matriz 5x5
    int matrizA[5][5];
    int matrizB[5][5];
    int soma[5][5];
    int somaDiagonal;
    int multiplicacao[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Insira o termo %dx%d da matriz A: ", i+1,j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Insira o termo %dx%d da matriz B: ", i+1,j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    //Soma
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Soma: \n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%3d", soma[i][j]);
        }
        printf("\n");
    }
    printf("\n")

    //Soma das diagonais Matriz A e B
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==j){
                somaDiagonal = matrizA[i][j] + matrizB[i][j];
            }
        }
    }

    printf("Soma das diagonais: %d", somaDiagonal);

    printf("\n")
    //Multiplicação das matrizes
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            multiplicacao[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }

    printf("Multiplicacao: \n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%3d", multiplicacao[i][j]);
        }
        printf("\n");
    }
    return 0;
}