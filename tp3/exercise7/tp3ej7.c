#include <stdio.h>

void calculateCelsiusToFarenheit(float toFar) {
    printf("Los grados celsius ingresados transformados a fahrenheit son: %f F\n", toFar);
}

void main () {
    float grade;
    float toFar;
    printf("Este es el sexto ejercicio del trabajo practico 3, pasaremos de celsius a fahrenheit. \n");

    printf("Ingrese grados en celsius: ");
    scanf("%f", &grade);

    toFar = (grade * 9/5) + 32;

    calculateCelsiusToFarenheit(toFar);
}

