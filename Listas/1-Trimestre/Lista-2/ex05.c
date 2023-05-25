#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int dig[5], menor, i;

    for (i=0; i < 5; i++){
        printf("Insia o %d numero :", i+1);
        scanf("%d", &dig[i]);
    }
    menor = dig[0];

    for (i=0; i < 5; i++){
        if (dig[i] < menor)
            menor = dig[i];
    }
    
    printf("Menor = %d", menor);
    return 0;
}