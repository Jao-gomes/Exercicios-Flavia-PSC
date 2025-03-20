// 6) Faça um programa que calcula a área de determinadas figuras geométricas. O programa
// deverá apresentar um menu com as seguintes opções:
// • 'q': quadrado
// • 'r': retângulo
// • 'c': círculo
// • 't': trapézio
// De acordo com a opção, o programa deve pedir os valores necessários para realizar o
// cálculo.

#include <stdio.h>
#include <math.h>

float calculateAreaOfSquare(float side);
float calculateAreaOfRectangle(float width, float length);
float calculateAreaOfCircle(float radius);
float calculateAreaOfTrapeze(float side1, float side2, float height);

int main() {
    char figure;

    printf("Escolha uma figura geométrica para calcular a área:\n");
    printf("q: Quadrado\nr: Retângulo\nc: Círculo\nt: Trapézio\n");
    printf("Digite a inicial da figura desejada: ");
    scanf(" %c", &figure); 

    if (figure == 'q') {
        float side, result;
        printf("Digite o lado do quadrado: ");
        scanf("%f", &side);
        result = calculateAreaOfSquare(side);
        printf("A área do quadrado é: %.2f\n", result);

    } else if (figure == 'r') {
        float width, length, result;
        printf("Digite a largura e o comprimento do retângulo: ");
        scanf("%f %f", &width, &length);
        result = calculateAreaOfRectangle(width, length);
        printf("A área do retângulo é: %.2f\n", result);

    } else if (figure == 'c') {
        float radius, result;
        printf("Digite o raio do círculo: ");
        scanf("%f", &radius);
        result = calculateAreaOfCircle(radius);
        printf("A área do círculo é: %.2f\n", result);

    } else if (figure == 't') {
        float side1, side2, height, result;
        printf("Digite os dois lados paralelos e a altura do trapézio: ");
        scanf("%f %f %f", &side1, &side2, &height);
        result = calculateAreaOfTrapeze(side1, side2, height);
        printf("A área do trapézio é: %.2f\n", result);

    } else {
        printf("Opção inválida! Por favor, digite uma inicial válida.\n");
    }

    return 0;
}


float calculateAreaOfSquare(float side) {
    return pow(side, 2);
}

float calculateAreaOfRectangle(float width, float length) {
    return width * length;
}

float calculateAreaOfCircle(float radius) {
    return M_PI * pow(radius, 2);
}

float calculateAreaOfTrapeze(float side1, float side2, float height) {
    return height * ((side1 + side2) / 2);
}
