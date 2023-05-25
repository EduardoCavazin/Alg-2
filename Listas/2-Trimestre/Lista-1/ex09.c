#include <stdio.h>

int contCaracter(char cadeia[], char busca){
    int cont = 0;

    for(int i = 0; cadeia[i] != '\0'; i++){
        if(cadeia[i] == busca){
            cont++;
        }
    }

    return cont;
}

int main(){
    char cadeia[20], busca;

    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", cadeia);
    printf("Digite o caracter que deseja buscar: ");
    scanf(" %c", &busca);

    printf("O caracter %c aparece %d vezes na cadeia de caracteres\n", busca, contCaracter(cadeia, busca));

    return 0;
}