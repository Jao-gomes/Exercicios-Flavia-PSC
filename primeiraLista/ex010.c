// 10) Escreva um algoritmo para ler a idade de uma pessoa e exibir quantos dias de vida
// ela possui. Considere sempre anos "cheios" e que um ano possui 365 dias.

#include <stdio.h>

int convertAgeInDays(int age);

int main(){
    int age, result;
    printf("Digite a sua idade:\n");
    scanf("%d", &age);

    result = convertAgeInDays(age);

    printf("Você viveu exatamente %d dias!\n", result);
    return 0;
}
// na maioria das minhas resoluções eu poderia retornar de uma vez o resultado ao inves de armazerna ele na variável
// mas prefiro que fique assim para ficar mais didático.
int convertAgeInDays(int age){
    int result = age * 365;
    return result;
}