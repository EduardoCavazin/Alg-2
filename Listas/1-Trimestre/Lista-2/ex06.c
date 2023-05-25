#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Insira o valor A: ");
    scanf("%d", &a);
    printf("Insira o valor B: ");
    scanf("%d", &b);
    printf("Insira o valor C: ");
    scanf("%d", &c);

    if (a+b>c && a+c>b && b+c>a){
        printf("Os tres valores formam um triangulo ");
            if (a==b && a==c)
                printf("equilatero");
            
            else if (a==b || a==c || b==c)
                printf("isoceles");
            
            else
                printf("escaleno");
    }
    else 
        printf("Os tres valores nao formam um triangulo");   
    return 0;
}