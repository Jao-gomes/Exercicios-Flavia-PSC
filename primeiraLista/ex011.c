// 11) Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um
// algoritmo para ler o valor do pagamento e o preço do litro da gasolina, e exibir quantos
// litros ele conseguiu colocar no tanque.

// vamos supor que a gasolina esteja 5 reais o LITRO

#include <stdio.h>

float priceOfGasoline(float reais, float gasolinePrice);

int main(){
    float payment,gasolinePrice = 5.00,result;
    printf("Quantos reais você quer pôr de gasolina ?\n");
    scanf("%f", &payment);

    result = priceOfGasoline(payment, gasolinePrice);

    printf("O litro da gasolina está R$%.2f, Você pagou com R$%.2f e terá exatamente direito a %.2fL de gasolina\n",gasolinePrice, payment,result);

    return 0;
}

float priceOfGasoline(float reais, float gasolinePrice){
    float result = reais / gasolinePrice;

    return result;
}