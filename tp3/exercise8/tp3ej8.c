#include <stdio.h>

void triangleSurface(float result) {
    printf("La superficie del triangulo vale: %.2f cm2 \n", result);
}

void main () {
    float base;
    float height;
    float result;
    printf("Este es el septimo ejercicio del trabajo practico 3, Calcularemos la superficie del triangulo. \n");

    printf("Ingrese la base del triangulo en cm: ");
    scanf("%f", &base);

    printf("Ingrese la altura del triangulo en cm: ");
    scanf("%f", &height);

    result = (base * height) / 2; 

    triangleSurface(result);
}

