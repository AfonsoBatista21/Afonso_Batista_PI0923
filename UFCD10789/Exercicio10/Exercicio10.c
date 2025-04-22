#include <stdio.h>

int main() {
    int num;


    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d número: ", i);
        scanf("%d", &numero);

        if (num % 2 == 0) {
            printf("O numero %d e PAR.\n", num;
        } else {
            printf("O numero %d e IMPAR.\n", num);
        }
    }

    return 0;
}

