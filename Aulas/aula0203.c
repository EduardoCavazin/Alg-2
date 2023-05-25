#include <stdio.h>
#include <string.h>
 /*
 int main(){
    int x[100];
    int i;
    for (i = 0; i<100; i++){
        x[i] = i;
    }
   for (i = 0; i<100; i++){
        printf("%d\n", x[i]);
    }
    
}
*/
/*
int main(){
    char nome[25];
    
    printf("Difite um nome: ");
    gets(nome);

    printf("O nome e: ");
    puts(nome);
    
}
*/

int main(){
    char nome1[20], nome2[20];

    printf("Digite o primeiro nome: ");
    gets(nome1);

    printf("Digite o segundo nome: ");
    gets(nome2);

    if(strcmp(nome1, nome2) == 0){
        printf("Sao iguais");
    }
}