// 7) Faça um algoritmo para ler um valor em polegadas e escrever o equivalente em
// centímetros. OBS:1 polegada = 2.54 centímetros.

#include <stdio.h>

float convertPolInCm (float number);

int main (){
    float number,result;
    printf("Digite o valor das polegadas: \n");
    scanf("%f", &number);

    result = convertPolInCm(number);
    printf("A conversão de %.2f polegadas para cm é: %.2fcm\n", number, result);


    return 0;
}

float convertPolInCm (float number){

    float convertNumber = number * 2.54;

    return convertNumber;
}