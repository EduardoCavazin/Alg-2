#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    float a, b, media;
    int i;
    i = 0;

    while (i==0){
        printf("Digite a primeira nota: ");
        scanf("%f", &a);

        if (a< 0 || a>10){
            printf("Nota Invalida\n");
        }
        else{
            i++;
        }
    }

    while (i==1){
        printf("Digite a segunda nota: ");
        scanf("%f", &b);

        if (b< 0 || b>10){
            printf("Nota Invalida\n");
        }
        else{
            i++;
        }
    }

    media = (a+b)/2;
    printf("Media = %.2f", media);
}