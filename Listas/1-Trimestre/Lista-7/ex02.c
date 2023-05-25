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

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i != j){
              printf("%d x %d = %d\n", i+1, j+1, matriz[i][j]);  
            }
        }
    }
}