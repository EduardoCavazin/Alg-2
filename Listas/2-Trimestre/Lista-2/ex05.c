#include <stdio.h>

int pow(int base, int exp){
    if(exp == 0){
        return 1;
    }else{
        return base * pow(base, exp-1);
    }
}

int main(){
    int base, exp, res;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &exp);

    res = pow(base, exp);

    printf("%d elevado a %d eh: %d\n", base, exp, res);

    return 0;
}