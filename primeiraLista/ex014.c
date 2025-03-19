// 14) Faça um algoritmo para calcular a área marcada da figura abaixo. O valor de
// “a”deverá ser fornecido pelo usuário.

// a marcação no exercício tá meio consfusa então irei considerar que ela quer somente o circulo.

#include <stdio.h>
#include <math.h>

float calculateAreaOfCircle(float section);

int main (){
    float a, result;
    printf("informe um valor para A:\n");
    scanf("%f", &a);
    result = calculateAreaOfCircle(a);
    printf("O valor da área do circulo é %.2f\n",result);
    return 0;
}

// o diametro todo vale a-2 
// o raio vai valer a-2/2
float calculateAreaOfCircle(float section){
    float pi = M_PI; // basicamente a blibioteca math.h tem um valor mais exato para o numero de PI ent eu vou usar 
                    // mas também poderia ser 3.14 whatever
    float area = pi * pow(((section-2)/2),2) ;

    return area;
}