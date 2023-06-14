#include <stdio.h>

void atualizarPontos(int *pTime1, int *pTime2, int golT1, int golT2){

    if(golT1 > golT2){
        *pTime1 += 3;
    }else if(golT2 > golT1){
        *pTime2 += 3;
    }else{
        *pTime1 += 1;
        *pTime2 += 1;
    }
}

int main(){
    int pTime1, pTime2, golT1, golT2;

    printf("Digite os pontos do times 1: ");
    scanf("%d", &pTime1);
    printf("Digite os pontos do times 2: ");
    scanf("%d", &pTime2);

    printf("Digite os gols do time 1: ");
    scanf("%d", &golT1);
    printf("Digite os gols do time 2: ");
    scanf("%d", &golT2);

    atualizarPontos(&pTime1, &pTime2, golT1, golT2);

    printf("Pontos do time 1: %d\n", pTime1);
    printf("Pontos do time 2: %d\n", pTime2);

    return 0;
}