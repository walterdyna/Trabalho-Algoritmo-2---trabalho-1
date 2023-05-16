#include <stdio.h>
#include <stdlib.h>

//02 - Escreva uma função que retorne a divisão entre dois números. Atenção para a questão da
//divisão por zero!

float divisao(float num1, float num2) {
    if (num2 == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    else {
        return num1 / num2;
    }
}

int main() {
    float num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    resultado = divisao(num1, num2);

    printf("O resultado da divisao entre %.2f e %.2f eh %.2f\n", num1, num2, resultado);

    return 0;
}
