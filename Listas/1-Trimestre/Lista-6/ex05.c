#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int v[30];
    srand(time(NULL));

    for(int i=0; i<30;i++){
        v[i] = rand() %50;
        printf("%d\n", v[i]);
    }
    printf("---------\n");
    for(int i = 29; i>=0; i--){
        printf("%d\n", v[i]);
    }
}