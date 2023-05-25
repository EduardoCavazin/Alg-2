#include <stdio.h>

int main(){
    int x, i, num, primo;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for(i = 2; i < x; i++){
        primo = 1;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1 && i > 1){
            num = i;
        }
    }
    
    printf("%d e o maior numero primo antes de %d", num, x);
}