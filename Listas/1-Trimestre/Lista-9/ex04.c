#include <stdio.h>

struct Livros{
    char nome[50];
    char editora[50];
    int isbn;
    int ano;
    int paginas;
    float preco;
};

int main(){
    struct Livros livro[5];
    int i, media;

    for(i=0; i<5; i++){
        printf("Insira o nome do livro %d: ", i+1);
        scanf("%s", livro[i].nome);
        printf("Insira a editora do livro %d: ", i+1); 
        scanf("%s", livro[i].editora);
        printf("Insira o ISBN do livro %d: ", i+1);
        scanf("%d", &livro[i].isbn);
        printf("Insira o ano do livro %d: ", i+1);
        scanf("%d", &livro[i].ano);
        printf("Insira o numero de paginas do livro %d: ", i+1);
        scanf("%d", &livro[i].paginas);
        printf("Insira o preco do livro %d: ", i+1);
        scanf("%f", &livro[i].preco);
    }

    for(i=0; i<5; i++){
        media += livro[i].paginas;
    }
    printf("Media de paginas dos livros: %d", media/5);
    return 0;
}