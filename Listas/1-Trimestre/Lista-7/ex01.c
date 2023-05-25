#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int matriz[10][10];
    srand(time(NULL));

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            matriz[i][j] = rand() % 50;
        }
    }
    printf("Diagonal Principal:\n");
    for(int i=0; i<10; i++){
        printf("%d x %d = %d\n", i+1, i+1, matriz[i][i]);
    }
    return 0;
}