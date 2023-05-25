#include <stdio.h>

int parImpar(int a){
    if(a%2 == 0){
        printf("O numero e par\n");
    }else{
        printf("O numero e impar\n");
    }
    
    return 0;
}

int main(){
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    parImpar(a);

    return 0;
}