#include <stdio.h>

void calculateTwoNumbers(int add, int sub) {
    printf("La suma es: %d\n", add);
    printf("La resta es: %d\n", sub);
}

int main () {
    int num1, num2, add, sub;
    printf("Este es el cuarto ejercicio del trabajo practico 3, retornaremos la suma y la resta de dos numeros. \n");

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    calculateTwoNumbers(add, sub);
}

#include <stdio.h>


