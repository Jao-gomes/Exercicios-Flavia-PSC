//5) Faça um algoritmo para ler um valor e imprimir o quadrado deste número.

#include <stdio.h>
#include <math.h>

int squaredNumbers(int number);

int main (){
    int number, result;
    printf("Digite um número inteiro\n");
    scanf("%d",&number);
    result = squaredNumbers(number);

    printf("O quadrado do número %d é:%d\n", number, result);

    return 0;

}

int squaredNumbers(int number){
    //poderiamos fazer dessa forma PORÉM irei optar por utilizar a blibioteca math.h
    //return number * number;

    int squaredNumber = (int) pow(number, 2); // especifiquei que eu quero um valor int como retorno da func pow

    return squaredNumber;
}