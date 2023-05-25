#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    int matriz[3][3];
    int x;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Insira um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("Insira o valor a ser multiplicada: ");
    scanf("%d", &x);
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\n", x*matriz[i][j]);
        }
    }
}