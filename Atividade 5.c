#include <stdio.h>
#include <stdlib.h>

// 05 - Escreva uma função que retorne o cubo do valor passado como argumento

int cubo(int num) {
    return num * num * num;
}

int main() {
    int num, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    resultado = cubo(num);

    printf("O cubo de %d eh: %d", num, resultado);

    return 0;
}

