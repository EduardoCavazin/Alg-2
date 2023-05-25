#include <stdio.h>

int somaRec (int x){
    if(x == 1){
        return 1;
    }else{
        return x + somaRec(x-1);
    }
}

int main(){
    int x, res;

    printf("Digite um numero: ");
    scanf("%d", &x);

    res = somaRec(x);

    printf("A soma dos numeros de 1 ate %d eh: %d\n", x, res);
    
    return 0;
}