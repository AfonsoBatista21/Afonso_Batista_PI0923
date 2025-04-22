#include <stdio.h>

int main(){

    int nota1, nota2, nota3, media;

    printf("Insira a primeira nota de 0 a 10: ");
    scanf("%d", &nota1);

    printf("Insira a segunda nota nota de 0 a 10: ");
    scanf("%d", &nota2);

    printf("Insira a terceira nota de 0 a 10: ");
    scanf("%d", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

    if(media>=6){
        printf("\nAPROVADO");
    }else{
        printf("\nREPROVADO");

}
}
