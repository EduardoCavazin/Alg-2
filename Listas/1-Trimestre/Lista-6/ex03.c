#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int c1[20], c2[20];
    int i, j;
    int flag = 0;
    srand(time(NULL));
    i = 0;

    while(i<20){
        c1[i] = rand() % 100;
        c2[i] = rand() % 100;
        i++;
    }
    i=0;
    
    while(i<20){
        j=0;
        while(j<20){
            if(c1[i] == c2[j]){
                printf("O numero %d esta nos dois conjuntos.\n", c1[i]);
                flag = 1;
            }
            j++;
        }
        i++;
    }
    if(flag == 0){
        printf("Nao a numeros repetidos.");
    }
    return 0;
}