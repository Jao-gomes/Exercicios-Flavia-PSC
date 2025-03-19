// 12) Elabore um algoritmo para entrar com o dia e o mês de uma data e informar quantos
// dias se passaram desde o início do ano. Esqueça a questão dos anos bissextos e
// considere 1 mês=30 dias.
#include <stdio.h>

int calculateDays (int days, int months);

int main (){
    int day, months, result;
    printf("Considere que todos os meses tenham 30 dias.\n");
    printf("Digite uma data no formato DIA/MÊS.\n");
    scanf("%d/%d", &day, &months);

    if(day > 30 || day < 0){
        printf("Você está de sacangem");
        return 1;
    }
    if(months < 1 || months > 12){
        printf("Você está de sacangem");
        return 1;
    }

    result = calculateDays(day, months);

    printf("já se passaram %d dias desde o ínicio do ano\n", result);
    return 0;
}
// supondo que o usuario entrou com o dado 12/10
int calculateDays (int days, int months){

    int calculateValue = (months - 1) * 30 + days;

    return calculateValue;
}