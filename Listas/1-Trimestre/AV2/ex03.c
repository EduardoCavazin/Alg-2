#include <stdio.h>

int main(){
    float x, y, res;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    printf("Digite a operacao: ");
    scanf(" %c", &op);

    if(op == '+'){
        res = x + y;
        printf("%.2f + %.2f = %.2f\n", x, y, res);
    }else if(op == '-'){
        res = x - y;
        printf("%.2f - %.2f = %.2f\n", x, y, res);
    }else if(op == '*'){
        res = x * y;
        printf("%.2f * %.2f = %.2f\n", x, y, res);
    }else if(op == '/'){
        res = x / y;
        printf("%.2f / %.2f = %.2f\n", x, y, res);
    }else{
        printf("Operacao invalida!\n");
    }

    return 0;
}