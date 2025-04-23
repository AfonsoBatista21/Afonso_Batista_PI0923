#include <stdio.h>

int main(){

    int segundos = 0;
    int minutos =0;
    int horas =0;
    
    
    printf("Insira o tempo em segundos: \n");
    scanf("%d", &segundos);
    
    minutos = segundos/60;
    segundos %= 60;
    horas = minutos/60;
    minutos %= 60;
    horas %= 24;
  

    printf("O seu tempo foi %d horas %d minutos %d segundos", horas, minutos, segundos);
    return 0;

}
