#include <stdio.h>
#include <conio.h>
#include <string.h>

int main () {
    int comp;
    char palavra[100];
    
    scanf("%s", &palavra);
    comp = strcmp(palavra, "fim");
    while(comp != 0){
        printf("Palavra informada: %s\n", palavra);
        scanf("%s", &palavra);
        comp = strcmp(palavra, "fim");
    }
    return 0;
}