// 5) Tendo como entrada a altura e o sexo (codificado da seguinte forma: “f”:feminino e
//     “m”:masculino) de uma pessoa, construa um programa que calcule e imprima seu peso
//     ideal, utilizando as seguintes fórmulas:
//     – para homens : (72.7 * h) – 58
//     – para mulheres : (62.1 * h) – 44.7
//     Onde h é a altura digitada.
#include <stdio.h>

int main(){
    char sexo;
    float weight, heigth;
    printf("Digite seu sexo com apenas um caractere --> f ou m:\n");
    scanf("%c", &sexo);
    printf("Digite sua altura da seguinte forma ex:1.75\n");
    scanf("%f", &heigth);

    if( sexo == 'm'){
        weight = (72.7 * heigth)-58;
        printf("Seu peso ideal é %.2f:\n",weight);
    }

    if( sexo == 'f'){
        weight = (62.1 * heigth) - 44.7;
        printf("Seu peso ideal é %.2f:\n",weight);
    }

    return 0;

}

