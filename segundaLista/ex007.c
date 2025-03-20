// Uma equipe de vôlei paga aos seus jogadores, além do salário, um valor adicional ao
// salário mensal que é função da produtividade de cada um. Essa produtividade é paga de
// acordo com a tabela a seguir:

// Faça um programa que, dados o salário e o código da classe de um jogador, calcule e
// imprima o seu salário final e o nome da sua classe (nível)

#include <stdio.h>

int main() {
    const int salary = 1000;
    int class;
    int grana = 0;

    printf("Digite qual é a sua classe (1 a 7): ");
    scanf("%d", &class);

    switch (class) {
        case 1:
            grana = salary * 2;
            printf("Excelente! Seu salário final é: %d\n", grana);
            break;
        case 2:
            grana = salary + ((salary * 80) / 100);
            printf("Bom! Seu salário final é: %d\n", grana);
            break;
        case 3:
            grana = salary + ((salary * 50) / 100);
            printf("Médio! Seu salário final é: %d\n", grana);
            break;
        case 4:
            grana = salary + ((salary * 30) / 100);
            printf("Regular! Seu salário final é: %d\n", grana);
            break;
        case 5:
            grana = salary + ((salary * 10) / 100);
            printf("Precisa treinar mais! Seu salário final é: %d\n", grana);
            break;
        case 6:
            grana = salary + ((salary * 5) / 100);
            printf("Te cuida! Seu salário final é: %d\n", grana);
            break;
        case 7:
            grana = salary;
            printf("Passe no departamento pessoal! Seu salário final é: %d\n", grana);
            break;
        default:
            printf("Classe inválida mula.\n");
            break;
    }

    return 0;
}


