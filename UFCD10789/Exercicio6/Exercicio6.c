#include <stdio.h>

int main() {
    char cliente[100];
    float valor_compra=0, desconto=0, apagar=0;


    printf("Digite o nome do cliente: ");
    fgets(cliente, sizeof(cliente), stdin);


    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);


    if (valor_compra <= 200)
        desconto = (valor_compra * 10) / 100;
    else if (valor_compra <= 500)
        desconto = (valor_compra * 15) / 100;
    else
        desconto = (valor_compra * 20) / 100;


    apagar = valor_compra - desconto;


    printf("\nNome do cliente: %s", cliente);
    printf("Valor da compra: %.2f\n", valor_compra);
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor final da compra: %.2f\n", apagar);

    return 0;
}
