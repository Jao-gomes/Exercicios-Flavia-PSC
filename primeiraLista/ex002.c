// 2) Faça um algoritmo para ler dois valores e imprimir a multiplicação dos mesmos.
// Irei fazer a mesma coisa do ex001

#include  <stdio.h>

int main(){
    int number1, number2, product;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &number1, &number2);
    product = number1 * number2;
    printf("A multiplicação de %d com %d é igual a %d\n", number1, number2, product);

    return 0;
}