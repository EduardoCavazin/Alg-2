#include <stdio.h>

struct DadosAluno{
    char nome[50];
    int idade;
};

int main(){
    struct DadosAluno aluno = {"Eduardo", 23};

    printf("Nome do aluno: %s\n", aluno.nome);
    printf("Idade do aluno: %d", aluno.idade);

    return 0;
}