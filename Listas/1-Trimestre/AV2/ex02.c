#include <stdio.h>

struct Aluno{
    char nome[50];
    int matricula;
    double n1;
    double n2;
    double n3;
    double media;
};

int main(){
    struct Aluno aluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Digite a nota 1 do aluno: ");
    scanf("%lf", &aluno.n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%lf", &aluno.n2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%lf", &aluno.n3);
    printf("\n");

    aluno.media = (aluno.n1 + aluno.n2 + aluno.n3) / 3;

    printf("Nome: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nota 1: %.2lf\n", aluno.n1);
    printf("Nota 2: %.2lf\n", aluno.n2);
    printf("Nota 3: %.2lf\n", aluno.n3);
    printf("Media: %.2lf\n", aluno.media);

    return 0;
}