#include <stdio.h>

int main() {
    int num1=0, num2=0;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("\nOrdem crescente: ");
    if(num1 < num2) {
        printf("%d, %d", num1, num2);
    } else {
        printf("%d, %d", num2, num1);
    }
    printf("\nOrdem decrescente: ");
    if(num1 > num2) {
        printf("%d, %d", num1, num2);
    } else {
        printf("%d, %d", num2, num1);
    }
}
