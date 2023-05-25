#include <stdio.h>

struct DadosAluno{
    char nome[50];
    int idade;
};

int main(){
    struct DadosAluno alunos[10];
    int i;

    for (i=0; i<10; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i+1);
        scanf("%d", &alunos[i].idade);
    }

    for(i=0; i<10; i++){
        printf("Nome do aluno %d: %s\n", i+1, alunos[i].nome);
        printf("Idade do aluno %d: %d\n\n", i+1, alunos[i].idade);
    }

    return 0;
}