#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int dig[3], maior, i;

    for (i=0; i < 3; i++){
        printf("Insia o %d numero :", i+1);
        scanf("%d", &dig[i]);
    }
    maior = dig[0];

    for (i=0; i < 3; i++){
        if (dig[i] > maior)
            maior = dig[i];
    }
    
    printf("Maior = %d", maior);
    return 0;
}