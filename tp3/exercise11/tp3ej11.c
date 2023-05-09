#include <stdio.h>
#include <math.h>

int main () {
    float numero;
    float parte_entera;
    float parte_decimal;


    printf("Este es el onceavo ejercicio del trabajo practico 3, mostrar un numero flotante por partes, la parte entera separada de la decimal. \n");
    printf("Ingrese un numero para analizarlo, que sea UN NUMERO DECIMAL \n");

    scanf("%f", &numero);

    parte_entera = (int)numero;
    parte_decimal = (numero - parte_entera) * 100;

    printf("El numero entero es %.0f \n", parte_entera);
    printf("El numero decimal es %.0f \n", parte_decimal);
}