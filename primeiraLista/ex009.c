// 9) Faça um algoritmo para ler um valor real e apresentar este valor com desconto de
// 10%.

#include  <stdio.h>

float discount(float number);

int main (){
    float number, result;
    printf("Digite um número no qual recebera um desconto de 10%%:\n");
    scanf("%f", &number);

    result = discount(number);
    printf("O desconto de 10%% de %.1f é: %.1f\n", number, result);
    return 0;

}

float discount(float number){
    float discountedNumber = number - (number * 10)/100;
    return discountedNumber;
}