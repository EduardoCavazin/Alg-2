#include <stdio.h>

int somaDigitos(int x){
    if(x < 10){
        return x;
    }else{
        return x%10 + somaDigitos(x/10);
    }
}

int main(){
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("A soma dos digitos de %d eh: %d\n", x, somaDigitos(x));

    return 0;
}