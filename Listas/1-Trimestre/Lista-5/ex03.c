#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    int v1[10];

    for(int i =0; i<10; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i =0; i<10; i++){
        if(v1[i]%7 == 0){
            printf("%d\n", v1[i]);
        }
    }
}