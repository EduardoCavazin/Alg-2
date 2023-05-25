#include <stdio.h>

struct tecido {
    int codigo;
    char descricao[50];
    float preco_metro;
    int qtd_estoque;
};

int main() {
    struct tecido tecidos[30];

    for (int i=0; i<30; i++){
        printf("Digite os dados do tecido %d:\n", i+1);
        printf("Codigo: ");
        scanf("%d", &tecidos[i].codigo);
        printf("Descricao: ");
        scanf("%s", tecidos[i].descricao);
        printf("Preco do metro: ");
        scanf("%f", &tecidos[i].preco_metro);
        printf("Quantidade em estoque: ");
        scanf("%d", &tecidos[i].qtd_estoque);
    }

    printf("\nRelatorio de tecidos:\n");
    for (int i=0; i<30; i++){
        printf("Codigo: %d\n", tecidos[i].codigo);
        printf("Descricao: %s\n", tecidos[i].descricao);
        printf("Preco do metro: %.2f\n", tecidos[i].preco_metro);
        printf("Quantidade em estoque: %d\n\n", tecidos[i].qtd_estoque);
    }

    printf("\nTecidos com estoque inferior a 50 metros:\n");
    for (int i=0; i<30; i++){
        if (tecidos[i].qtd_estoque < 50){
            printf("Codigo: %d\n", tecidos[i].codigo);
            printf("Descricao: %s\n", tecidos[i].descricao);
            printf("Preco do metro: %.2f\n", tecidos[i].preco_metro);
            printf("Quantidade em estoque: %d\n\n", tecidos[i].qtd_estoque);
        }
    }

    printf("\nTecidos com preco inferior a R$ 0,60 o metro:\n");
    for (int i=0; i<30; i++){
        if (tecidos[i].preco_metro < 0.60){
            printf("Codigo: %d\n", tecidos[i].codigo);
            printf("Descricao: %s\n", tecidos[i].descricao);
            printf("Preco do metro: %.2f\n", tecidos[i].preco_metro);
            printf("Quantidade em estoque: %d\n\n", tecidos[i].qtd_estoque);
        }
    }
    
    return 0;
}