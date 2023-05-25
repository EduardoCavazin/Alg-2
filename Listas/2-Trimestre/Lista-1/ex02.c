#include <stdio.h>

int fatorial (int num){
    int fat = 1;
    for (int i = num; i >= 1; i--){
        fat *= i;
    }
    return fat;
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    printf("O fatorial de %d e %d\n", num, fatorial(num));

    return 0;
}