#include <stdio.h>
#include <math.h>

int main () {
    int numero1;
    float result;

    printf("Este es el decimo ejercicio del trabajo practico 3, Calcularemos la raiz cuadrada del numero ingresado. \n");
    printf("Ingrese un numero para calcularlo \n");

    scanf("%d", &numero1);
    result = sqrt(numero1);

    printf("El numero ingresado es %d \n", numero1);
    printf("Su raiz cuadrada es %.2f \n", result);
}