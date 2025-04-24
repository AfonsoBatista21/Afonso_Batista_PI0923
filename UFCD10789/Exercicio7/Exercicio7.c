#include <stdio.h>

int main(){

    int nota1=0, nota2=0, nota3=0, media=0;

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
