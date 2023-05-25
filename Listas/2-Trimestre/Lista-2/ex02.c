#include <stdio.h>

int pa(int n, int q, int a1){
    if(n == 1){ 
        return a1; 
    }else{
        return q + pg(n-1, q, a1);
    }
}

int main(){
    int n, q, a1;

    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
    printf("Digite a razão: ");
    scanf("%d", &q);
    printf("Posicao a ser descoberta: ");
    scanf("%d", &n);

    printf("O %dº termo da PA é: %d\n", n, pa(n, q, a1));

    return 0;
}