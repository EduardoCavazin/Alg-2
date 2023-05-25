#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int matriz1[3][4];
    int matriz2[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Insira o termo %dx%d da matriz: ", i+1,j+1);
            scanf("%d", &matriz1[i][j]);

            matriz2[i][j] = 3 * matriz1[i][j];
        }
    }
    printf("Matriz 2 = \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d x %d = %d\n", i+1, j+1, matriz2[i][j]);
        }
    }
    return 0;
}