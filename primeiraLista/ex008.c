// 8) Faça um algoritmo para ler base e altura de um triângulo e informar a área.

#include <stdio.h>

float calculateAreaOfTriangle(float base, float height);

int main(){
    float base, height,result;
    printf("Digite RESPECTIVAMENTE a base e a altura do triângulo:");
    scanf("%f%f", &base, &height);

    result = calculateAreaOfTriangle(base, height);

    printf("A área do triângulo é: %.2f\n", result);

    return 0;

}

float calculateAreaOfTriangle(float base, float height){
    float area = base * height;
    return area;
}