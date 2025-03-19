//4) Faça um algoritmo para ler um valor em quilogramas (Kg) e imprimir o equivalente
//em gramas (g).

#include <stdio.h>

float convertValue(float number);

int main (){
    float value;
    printf("CONVERSOR DE QILOGRAMA PARA GRAMA!");
    printf("Digite um valor em Kg:\n");
    scanf("%f", &value);
    float result = convertValue(value);
    printf("O resultado da conversão de %.2f kg para gramas é: %.2f g\n",value, result);

    return 0;
}

float convertValue(float number){
    float resultInGrams = number * 1000;

    return resultInGrams;
}