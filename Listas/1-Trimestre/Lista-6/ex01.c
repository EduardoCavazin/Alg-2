#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int num[10];
    int i = 0;

    while(i<10){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
        i++;
    }
    i = 0;
    while(i<10){
        printf("%d numero: %d\n", i+1, num[i]);
        i++;
    }
    return 0;
}