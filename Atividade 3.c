#include <stdio.h>
#include <math.h>

// 03 - Escreva um programa que calcule a área de um círculo a partir de uma função
// especialmente desenhada para isso; essa função recebe o valor do raio e retorna a área
// do círculo.
// Formula: A = Pi . r^2
// Onde A é a área, PI equivale a 3,14 (aproximadamente) e r é o raio do círculo.

float calcular_area_circulo(float raio) {
    float area;
    const float PI = 3.14159265359;

    area = PI * pow(raio, 2);

    return area;
}

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = calcular_area_circulo(raio);

    printf("A area do circulo de raio %.2f eh %.2f\n", raio, area);

    return 0;
}
