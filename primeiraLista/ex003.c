// 3) Faça um algoritmo para ler três valores e imprimir a soma dos mesmos.
#include  <stdio.h>

int main(){
    int number1, number2, number3, sumOfNumbers;

    printf("Digite três numeros inteiros:\n");
    scanf("%d%d%d", &number1, &number2, &number3);
    sumOfNumbers = number1 + number2 + number3;
    printf("A soma de %d com %d com %d é igual a %d\n", number1, number2, number3, sumOfNumbers);

    return 0;
}