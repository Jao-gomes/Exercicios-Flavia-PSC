// 2) Faça um programa em C para ler o peso e a idade do usuário e mostrar qual o risco de
// apresentar um problema cardíaco:
// • peso maior que 110 kg e idade acima de 38 anos: ALTO RISCO
// • peso menor que 110kg e idade acima de 38 anos: MÉDIO RISCO
// • peso maior que 110kg e idade abaixo ou igual a 38 anos: BAIXO RISCO
// • nenhuma das anteriores: BAIXíSSIMO RISCO.
#include <stdio.h>

const char* problem(float weigth, int age);
//estou usando const char* pq eu quero que retorne uma srtring.

int main() {
    int age;
    float weigth;
    const char* result;

    printf("Informe o seu PESO E IDADE RESPECTIVAMENTE!\n");
    scanf("%f%d", &weigth, &age);

    result = problem(weigth, age);

    printf("Seu peso é %.2fkg e você tem %d anos de idade e sua chance de ter um problema no coração é: %s\n", weigth, age, result);

    return 0;
}

const char* problem(float weigth, int age) {
    if (weigth > 110 && age > 38) {
        return "ALTO RISCO";
    } else if (weigth <= 110 && age > 38) {
        return "MÉDIO RISCO";
    } else if (weigth > 110 && age <= 38) {
        return "BAIXO RISCO";
    } else {
        return "BAIXÍSSIMO RISCO";
    }
}
