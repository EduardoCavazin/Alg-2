#include <stdio.h>

void lerMatrix(int matrix[100][100], int *linhas, int *colunas){
    int i = 0, j = 0;
    int valor;

    while(1){
        scanf("%d", &valor);
        
        if(valor == -2){
            printf("Fim da leitura\n");
            break;
        }
        if(valor == -1){
            (*linhas)++;  // Usar parênteses para incrementar o valor da variável
            j = 0;
        }else if(valor >= 0){
            matrix[i][j] = valor;
            j++;
            if(j > *colunas){
                *colunas = j;
            }
        }
    }
}

int main(){
    int matrix[100][100];
    int linhas = 0, colunas = 0;

    printf("Digite os valores da matriz, sendo -1 para pular linha e -2 para finalizar: \n");  // Adicionando ponto e vírgula

    lerMatrix(matrix, &linhas, &colunas);

    printf("Linhas: %d\n", linhas);
    printf("Colunas: %d\n", colunas);

    return 0;
}
