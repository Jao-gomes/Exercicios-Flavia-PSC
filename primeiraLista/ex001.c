// 1) Faça um algoritmo para ler dois valores e imprimir a soma dos mesmos.
// Aqui ela não pediu para o usuário os números mas eu vou fazer assim para ficar
// mais interativo
#include  <stdio.h>

int main(){
    int number1, number2, sumOfNumbers;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &number1, &number2);
    sumOfNumbers = number1 + number2;
    printf("A soma de %d com %d é igual a %d\n", number1, number2, sumOfNumbers);

    return 0;
}