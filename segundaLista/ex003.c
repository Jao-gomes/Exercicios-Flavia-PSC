// 3) Escreva um programa que leia o código de origem de um produto e imprima na tela a
// região de sua procedência conforme a tabela abaixo:
// • código 1 : Sul
// • código 2 : Sudeste
// • código 3 : Centro-Oeste
// • código 4 : Nordeste
// • código 5: Norte
// • Observação: Caso o código não seja nenhum dos especificados o produto deve ser
// encarado como Importado.
#include <stdio.h>
const char* postCode(int number);


int main(){
    int code;
    const char* result; // ponteiro
    printf("Digite o código de postagem do produto:\n");
    scanf("%d",&code);
    result = postCode(code);

    printf("A região que seu produto está é:%s\n", result);
    return 0;
}



const char* postCode(int number) {
    switch (number)
    {
    case 1:
        return "Sul";
        break;
    case 2:
        return "Sudeste";
        break;
    case 3:
        return "Centro-Oeste";
        break;
    case 4:
        return "Nordeste";
        break;
    case 5:
        return "Norte";
        break;
    default:
        return "PRODUTO IMPORTADO";
        break;
    }
}
