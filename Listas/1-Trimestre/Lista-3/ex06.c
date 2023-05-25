#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    float num, total, media;

    for(int i = 1; i < 11; i++){
        printf("Digite o %d valor: ", i);
        scanf("%f", &num);
        total +=  num;
    }
    media = total/10;

    printf("Media = %.2f", media);
}