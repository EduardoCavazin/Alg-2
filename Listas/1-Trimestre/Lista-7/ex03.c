#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int matriz[5][5];
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Insira o termo %dx%d da matriz 1: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d x %d = %d\n", i+1, j+1, matriz[i][j]);
        }
    }
    return 0;
}