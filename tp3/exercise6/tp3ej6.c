#include <stdio.h>

void calculateFarenheitToCelsius(float toCelsius) {
    printf("Los grados farenheit ingresados transformados a celsius son: %f C\n", toCelsius);
}

void main () {
    float grade;
    float toCelsius;
    printf("Este es el sexto ejercicio del trabajo practico 3, pasaremos de farenheint a celsius. \n");

    printf("Ingrese grados en farenheit: ");
    scanf("%f", &grade);

    toCelsius = (grade - 32) * 5/9;

    calculateFarenheitToCelsius(toCelsius);
}



