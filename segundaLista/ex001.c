// 1) Faça um programa em C para ler dois valores e mostrar “EM ORDEM” caso o primeiro seja
// menor que o segundo e “FORA DE ORDEM” no caso contrário
#include <stdio.h>

int main(){
    int number1, number2;
    printf("Digite dois números.\n");
    scanf("%d%d", &number1,&number2);

    if(number1 > number2){
        printf("Em ordem!!!!!\n");
    } else{
        printf("Fora de ordem!!!!!\n");
    }
    return 0;
}