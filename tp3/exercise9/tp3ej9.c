#include <stdio.h>
#include <math.h>

void hipotenusaX(double catetoB, double catetoC, double hipotenusa) {
    hipotenusa = sqrt((catetoB * catetoB) + (catetoC * catetoC));
    printf("La hipotenusa vale: %f cm \n", hipotenusa);
}

void catetoBX(double catetoB, double catetoC, double hipotenusa) {
    catetoB = sqrt(hipotenusa * hipotenusa - catetoC * catetoC);
    printf("El catetoB vale: %f cm \n", catetoB);
}

void catetoCX(double catetoB, double catetoC, double hipotenusa) {
    catetoC = sqrt(hipotenusa * hipotenusa - catetoB * catetoB);
    printf("El catetoC vale: %f cm \n", catetoC);
}

void main () {
    double catetoB;
    double catetoC;
    double hipotenusa;
    int valor;

    printf("Este es el noveno ejercicio del trabajo practico 3, Calcularemos el valor de hipotenusa, cateto a o catetob. \n");
    printf("Que valor del triangulo desconoces?\n");
    printf("Elegir uno de acuerdo a su numero: 1=hipotenusa, 2=catetoC, 3=catetoB \n");

    scanf("%d", &valor);
    
    switch (valor)
    {
    case 1:
        printf("Ingrese del catetoB en cm: \n");
        scanf("%f", &catetoB);
        printf("Ingrese del catetoC en cm: \n");
        scanf("%f", &catetoC);
        hipotenusaX(catetoB, catetoC, hipotenusa);
        break;

    case 2:
        printf("Ingrese del catetoB en cm: \n");
        scanf("%f", &catetoB);
        printf("Ingrese de la hipotenusa en cm: \n");
        scanf("%f", &hipotenusa);
        catetoCX(catetoB, hipotenusa, catetoC);
        break;

    case 3:
        printf("Ingrese del catetoC en cm: \n");
        scanf("%f", &catetoB);
        printf("Ingrese de la hipotenusa en cm: \n");
        scanf("%f", &hipotenusa);
        catetoBX(catetoC, hipotenusa, catetoB);
        break;
    }

}