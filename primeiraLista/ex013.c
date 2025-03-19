// 13) O restaurante "Bom e Barato" cobra R$20,00 por quilo de comida, porém sua
// balança só marca a pesagem em gramas. Faça um algoritmo para ler o valor pesado de
// um cliente e informar o preço a pagar pelo prato.
#include <stdio.h>

float balance(float value);
float priceOfDish(float weightInKg);

int main(){
    float value, weightInKg,resultInGrams;
    printf("Coloque o seu prato na balança\n");
    scanf("%f",&value);

    weightInKg = balance(value);
    printf("Balança indicou %.2f gramas: \n", value);

    resultInGrams = priceOfDish(weightInKg);

    printf("Seu prato pesa %.2f kg e você terá que pagar R$%.2f.\n",value, resultInGrams);

    return 0;
}

float balance(float value){
    float result = value / 1000;
    return result;
}

float priceOfDish(float weightInKg){
    float price = weightInKg * 20;
    return price;
}