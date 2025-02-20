#include <stdio.h>

int main(){

    int segundos;
    printf("Insira o tempo em segundos: \n");
    scanf("%d", &segundos);

    int minutos = segundos/60;
    segundos %= 60;
    int horas = minutos/60;
    minutos %= 60;
    horas %= 24;

    printf("O seu tempo foi %d horas %d minutos %d segundos", horas, minutos, segundos);
    return 0;

}
