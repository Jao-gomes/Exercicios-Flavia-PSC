// 4) Maçãs custam R$ 0,30 se forem compradas menos que uma dúzia e R$0,25 se forem
// compradas uma dúzia ou mais. Escreva um programa em pseudocódigo que leia o número
// de maçãs compradas, calcule e escreva na tela o valor total da compra.
#include <stdio.h>

float countApples(float apple);

int main(){
    float countOfApple, result;
    printf("Digite quantas maçãs você comprou\n");
    scanf("%f", &countOfApple);
    result = countApples(countOfApple);

    printf("Você comprou maçãs %.2f por R$ %.2f\n", countOfApple, result);

}

float countApples(float apple){
    if(apple > 12){
        return apple * 0.25;
    } else {
        return apple * 0.30;
    }
}