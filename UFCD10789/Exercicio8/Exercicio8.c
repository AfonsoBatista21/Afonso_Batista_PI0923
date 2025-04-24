#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, media=0;
    int alunos_acima_da_media = 0;


    for (int i = 0; i < 10; i++) {
        do {
            printf("Insira a nota do %d aluno (entre 0 e 20): ", i + 1);
            scanf("%f", &notas[i]);

            if (notas[i] < 0 || notas[i] > 20) {
                printf("Nota Invalida tente inserir uma nota em 0 e 20\n");
            }
        } while (notas[i] < 0 || notas[i] > 20);

        soma += notas[i];
    }


    media = soma / 10;


    for (int i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            alunos_acima_da_media++;
        }
    }


    printf("\nA media das notas e: %.2f\n", media);
    printf("Numero de alunos com notas iguais ou acima da media: %d\n", alunos_acima_da_media);

    return 0;
}
