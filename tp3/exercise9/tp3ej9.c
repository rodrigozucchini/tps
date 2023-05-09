#include <stdio.h>
#include <math.h>

int main () {
    int catetoB;
    int catetoC;
    int hipotenusa;
    int valor;
    double result;

    printf("Este es el noveno ejercicio del trabajo practico 3, Calcularemos el valor de hipotenusa, cateto a o cateto b. \n");
    printf("Que valor del triangulo desconoces?\n");
    printf("Elegir uno de acuerdo a su numero: 1=hipotenusa, 2=catetoC, 3=catetoB \n");

    scanf("%d", &valor);
    
    switch (valor)
    {
    case 1:
        printf("Ingrese del catetoB en cm: \n");
        scanf("%d", &catetoB);
        printf("Ingrese del catetoC en cm: \n");
        scanf("%d", &catetoC);

        result = sqrt(pow(catetoB, 2) + pow(catetoC, 2));
        printf("La hipotenusa vale: %f cm \n", result);
        break;

    case 2:
        printf("Ingrese del catetoB en cm: \n");
        scanf("%d", &catetoB);
        printf("Ingrese de la hipotenusa en cm: \n");
        scanf("%d", &hipotenusa);

        result = sqrt(pow(hipotenusa, 2) - pow(catetoB, 2));
        printf("El catetoC vale: %f cm \n", result);
        break;

    case 3:
        printf("Ingrese del catetoC en cm: \n");
        scanf("%d", &catetoB);
        printf("Ingrese de la hipotenusa en cm: \n");
        scanf("%d", &hipotenusa);

        result = sqrt(pow(hipotenusa, 2) - pow(catetoC, 2));
        printf("El catetoB vale: %.2f cm \n", result);
        break;
    }
}

