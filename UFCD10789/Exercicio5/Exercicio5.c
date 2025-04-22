#include <stdio.h>

int main(){
    int nums[3];

    printf("Insira o primeiro numero: ");
    scanf("%d", &nums[0]);

    printf("Insira o segundo numero: ");
    scanf("%d", &nums[1]);

    printf("Insira o terceiro numero: ");
    scanf("%d", &nums[2]);
    int swapped;
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    printf("Ordem Crescente: \n");
     for(int i = 0; i < 3; i++){
        printf("%d\n", nums[i]);
     }
     printf("Ordem Descrescente: \n");
     for(int i = 2; i >= 0; i--){
        printf("%d\n", nums[i]);
     }


}
