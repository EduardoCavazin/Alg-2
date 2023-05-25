#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int matriz1[4][4], matriz2[4][4], soma[4][4];

    printf("Matriz 1: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Insira o termo %dx%d da matriz 1: ", i+1,j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Matriz 2: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Insira o termo %dx%d da matriz 2: ", i+1,j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    printf("Soma = \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d x %d = %d\n", i+1, j+1, soma[i][j]);
        }
    }
    return 0;
}