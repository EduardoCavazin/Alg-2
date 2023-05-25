#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    float sal[20];
    int i = 0;

    while(i<20){
        printf("Insira o %d salario: ", i+1);
        scanf("%f", &sal[i]);
        i++;
    }
    i=0;
    while(i<20){
        sal[i] = sal[i] * 1.08;
        printf("Novo salario = %.2f\n", sal[i]);
        i++;
    }
    return 0;
}