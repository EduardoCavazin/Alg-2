#include <stdio.h>

void addEstoque(float *caixa, int qtdOp, float *qtdProduto[], float *preco[], int produto){
    if(qtdOp > 0){
        qtdProduto[produto - 1] += qtdOp;
        *caixa -= qtdOp * preco[produto - 1];
    }
    else{
        printf("Quantidade invalida\n");
    }
}

void vendaEstoque(float *caixa, float qtdOp, int *qtdProduto[], float *preco[], int produto){
    if(qtdOp > 0){
        qtdProduto[produto - 1] -= qtdOp;
        *caixa += qtdOp * preco[produto - 1];
    }
    else{
        printf("Quantidade invalida\n");
    }
}


int main(){
    int qtdProduto[4] = {10, 15, 2, 4};
    int op, produto;
    float qtdOp;
    float preco[4] = {10, 4.5, 19.99, 5000};
    float caixa = 100;

    do{
        printf("Escolha as opcoes: \n");
        printf("1 - Adicionar ao estoque\n");
        printf("2 - Vender produto\n");
        printf("3 - Ver caixa\n");
        printf("4 - Ver estoque\n");
        printf("5 - Sair\n");
        scanf("%d", &op);

    switch (op){
        case 1:
            printf("Escolha o produto: \n");
            printf("1 - Arroz\n");
            printf("2 - Feijao\n");
            printf("3 - Chiclete\n");
            printf("4 - Corrente de ouro 24k\n");
            scanf("%d", &produto);

            printf("Quantidade em estoque %d\n", qtdProduto[produto - 1]);
            printf("Valor do produto %.2f\n", preco[produto - 1]);

            printf("Digite a quantidade: \n");
            scanf("%f", &qtdOp);

            addEstoque(&caixa, qtdOp, &qtdProduto, &preco, produto);
            break;
        
        case 2:
            printf("Escolha o produto: \n");
            printf("1 - Produto 1\n");
            printf("2 - Produto 2\n");
            printf("3 - Produto 3\n");
            printf("4 - Produto 4\n");
            scanf("%d", &produto);

            printf("Quantidade em estoque %d\n", qtdProduto[produto - 1]);
            printf("Valor do produto %.2f\n", preco[produto - 1]);

            printf("Digite a quantidade: \n");
            scanf("%f", &qtdOp);

            venderEstoque(&caixa, qtdOp, &qtdProduto, &preco, produto);
            break;

        case 3:
            printf("Caixa: %.2f\n", caixa);
        
        case 4:
            printf("Estoque: \n");
            printf("Produto 1: %d\n", qtdProduto[0]);
            printf("Produto 2: %d\n", qtdProduto[1]);
            printf("Produto 3: %d\n", qtdProduto[2]);
            printf("Produto 4: %d\n", qtdProduto[3]);
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }
    printf("\n");
    }while(op != 5);

    return 0;
}