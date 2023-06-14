#include <stdio.h>

void converteHoras(int totalSeg, int *hora, int *min, int *seg){
    *hora = totalSeg / 3600;
    *min = (totalSeg % 3600) / 60;
    *seg = (totalSeg % 3600) % 60;
}

int main(){
    int totalSeg, hora, min, seg;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSeg);

    converteHoras(totalSeg, &hora, &min, &seg);

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos\n", totalSeg, hora, min, seg);

    return 0;
}