#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int max3(int a, int b, int c) {
    return max(max(a, b), c);
}

int min3(int a, int b, int c) {
    return min(min(a, b), c);
}

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int maior = 0; 
    int menor = 0; 

    printf("Insira o primeiro número: \n");
    scanf("%d", &num1);

    printf("Insira o segundo número: \n");
    scanf("%d", &num2);

    printf("Insira o terceiro número: \n");
    scanf("%d", &num3);

    maior = max3(num1, num2, num3);
    menor = min3(num1, num2, num3);

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
