#include <stdio.h>

struct pessoa{
    char nome[30];
    int idade;
};

int main(){
    struct pessoa clientes[10];

    for (int i =0; i<10; i++){
        printf("Informe o nome do cliente: ");
        scanf("%s", &clientes[i].nome);
        printf("Informe a idade: ");
        scanf("%d", &clientes[i].idade);
    }
    for (int i =0; i<10; i++){
        printf("Nome: %s\n", clientes[i].nome);
        printf("Idade: %d\n\n", clientes[i].idade);
    }

    return 0;
}