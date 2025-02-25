#include <stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}
int max3(int a, int b, int c) {
    return max(max(a,b),c);
}

int main(){
    int num1;
    int num2;
    int num3;

    printf("Insira o primeiro num: \n");
    scanf("%d", &num1);

    printf("Insira o segundo num: \n");
    scanf("%d", &num2);

    printf("Insira o terceiro num: \n");
    scanf("%d", &num3);


}
