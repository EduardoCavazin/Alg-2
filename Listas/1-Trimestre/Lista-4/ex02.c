#include <stdio.h>

int main(){
    int num[15];
    for(int i =0; i<15; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    for(int i =0; i<15; i++){
        if(num[i]%2 == 0){
            printf("%d e par\n", num[i]);
        }
        else{
            printf("%d e impar\n", num[i]);
        }
    }
}