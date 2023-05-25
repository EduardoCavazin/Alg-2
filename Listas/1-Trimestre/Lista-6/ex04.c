#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    float v[10], w[10];
    int i=0;
    srand(time(NULL));

    while(i<10){
        v[i] = rand() % 50;
        w[i] = v[i]*v[i];

        printf("%.2f  |  %.2f\n", v[i], w[i]);
        i++;
    }
    return 0;
}