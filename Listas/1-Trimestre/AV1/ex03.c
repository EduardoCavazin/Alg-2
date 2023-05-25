#include <stdio.h>
#include <string.h>

struct Endereco{
    char rua[100];
    int numero;
    char bairro[50];
    char complemento[50];
    char cidade[50];
    char estado[50];
    int cep;
};

int main(){
    //preecnchendo o endereço
    struct Endereco casa;
    printf("Digite a rua: ");
    fgets(casa.rua, 100, stdin);
    casa.rua[strlen(casa.rua)-1] = '\0';
    printf("Digite o numero: ");
    scanf("%d", &casa.numero);
    printf("Digite o bairro: ");
    fgets(casa.bairro, 50, stdin);
    casa.bairro[strlen(casa.bairro)-1] = '\0';
    printf("Digite o complemento: ");
    fgets(casa.complemento, 50, stdin);
    casa.complemento[strlen(casa.complemento)-1] = '\0';
    printf("Digite a cidade: ");
    fgets(casa.cidade, 50, stdin);
    casa.cidade[strlen(casa.cidade)-1] = '\0';
    printf("Digite o estado: ");
    fgets(casa.estado, 50, stdin);
    casa.estado[strlen(casa.estado)-1] = '\0';
    printf("Digite o cep: ");
    scanf("%d", &casa.cep);
    
    printf("Rua: %s\n", casa.rua);
    printf("Numero: %d\n", casa.numero);
    printf("Bairro: %s\n", casa.bairro);
    printf("Complemento: %s\n", casa.complemento);
    printf("Cidade: %s\n", casa.cidade);
    printf("Estado: %s\n", casa.estado);
    printf("Cep: %d\n", casa.cep);

    return 0;
}
