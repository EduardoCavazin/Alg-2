#include <stdio.h>

int dataValida(int dia, int mes, int ano){
    int diasMes;

    if(mes < 1 || mes > 12){
        return 0;//Mês inválido   
    }
    if(ano < 1){
        return 0;//Ano inválido
    }

    switch(mes){
        case 2:  // Fevereiro
            // Verifica se é ano bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                diasMes = 29;
            } else {
                diasMes = 28;
            }
            break;
        case 4:  // Abril
        case 6:  // Junho
        case 9:  // Setembro
        case 11:  // Novembro
            diasMes = 30;
            break;
        default:  // Demais meses
            diasMes = 31;
            break;
    }

    if(dia < 1 || dia > diasMes){
        return 0;//Dia inválido
    }

    return 1;//Data válida
}

void imprimeData(int dia, int mes, int ano){
    char *meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho",
        "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}

int main(){
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(dataValida(dia, mes, ano)){
        imprimeData(dia, mes, ano);
    }else{
        printf("Data inválida\n");
    }

    return 0;
}