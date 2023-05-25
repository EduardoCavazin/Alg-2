#include <stdio.h>

struct Telefone{
    int ddd;
    int numero;
};

int main(){
    struct Telefone telefone;
    printf("Insira o DDD: ");
    scanf("%d", &telefone.ddd);
    printf("Insira o numero: ");
    scanf("%d", &telefone.numero);
    printf("\n");
    
    printf("Telefone: (%02d) %05d-%04d\n", telefone.ddd, telefone.numero / 10000, telefone.numero % 10000);
    return 0;
}