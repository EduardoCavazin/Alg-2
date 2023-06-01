#include <stdio.h>

void incremento(int x){ // passagem por valor
    x += 1;
    printf("Valor de x: %d\n", x);
}

void incremento2 (int *y){ // passagem por referência
    *y += 1;
    printf("Valor de y: %d\n", *y);
}

int main(){
    int x = 10;
    int y = 10;


    incremento(x); // passagem por valor
    printf("Valor de x: %d\n", x);

    printf("\n");
   
    incremento2(&y); // passagem por referência
    printf("Valor de y: %d\n", y);
   
   
   return 0;
}


