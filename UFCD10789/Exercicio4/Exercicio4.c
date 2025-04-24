#include <stdio.h>

int main(){
    float saldo_inicial=0;
    float cheque=0;

    printf("Insira o seu saldo inicial: ");
    scanf("%f", &saldo_inicial);

    printf("Insira o valor do cheque: ");
    scanf("%f", &cheque);

    if(saldo_inicial > cheque){
        printf("O seu saldo permite o desconto do cheque");
    }else{
        printf("O seu saldo nao permite o desconto do cheque");
    }

   printf("\n%f", saldo_inicial);

}
