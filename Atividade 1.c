#include <stdlib.h>
#include <stdio.h>

//01 - Escreva um programa que implemente uma fun��o que retorne a diferen�a entre dois
//n�meros inteiros digitados pelo usu�rio.

int main() {
    int num1, num2, diferenca;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    diferenca = num1 - num2;

    printf("A diferenca entre %d e %d eh %d\n", num1, num2, diferenca);

    return 0;
}
