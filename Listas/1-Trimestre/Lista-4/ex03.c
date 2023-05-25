#include <stdio.h>

int main(){
    int v1[8];

    for(int i =0; i<8; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i =0; i<8; i++){
        if(v1[i]%6 == 0){
            printf("%d\n", v1[i]);
        }
    }
}