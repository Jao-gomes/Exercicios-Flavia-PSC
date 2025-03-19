// 6) Faça um algoritmo para ler um valor correspondente a um lado de um quadrado e
// mostrar a ÁREA.
// literalmente a mesma coisa que o exericio 5

#include <stdio.h>
#include <math.h>

int areaOfCube(int number);

int main (){
    int number, result;
    printf("Digite um número inteiro\n");
    scanf("%d",&number);
    result = areaOfCube(number);

    printf("O área do quadrado é:%d\n", result);

    return 0;

}

int areaOfCube(int number){
    //poderiamos fazer dessa forma PORÉM irei optar por utilizar a blibioteca math.h
    //return number * number;

    int squaredNumber = (int) pow(number, 2); // especifiquei que eu quero um valor int como retorno da func pow

    return squaredNumber;
}