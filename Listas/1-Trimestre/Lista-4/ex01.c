#include <stdio.h>

int main(){
    int v1[5], v2[5], soma[5];
    
    for(int i =0; i<5; i++){
        printf("Insira o %d digito do vetor 1: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i =0; i<5; i++){
        printf("Insira o %d digito do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
    }
    for(int i =0; i<5; i++){
        soma[i] = v1[i] + v2[i];
        printf("%d\n", soma[i]);
    }
}