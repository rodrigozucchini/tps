#include <stdio.h>

void calculateTwoNumbers(int add, int sub, int divide, int multiply) {
    printf("La suma es: %d\n", add);
    printf("La resta es: %d\n", sub);
    printf("La multiplicacion es: %d\n", multiply);
    printf("La division es: %d\n", divide);

}

int main () {
    int num1, num2, add, sub, multiply, divide;
    printf("Este es el cuarto ejercicio del trabajo practico 3, retornaremos la suma y la resta de dos numeros. \n");

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);


    add = num1 + num2;
    sub = num1 - num2;
    multiply = num1 * num2;
    
    if (num2 == 0) {
        printf("Error: denominador no puede ser cero.\n");
        divide = 1;
    } else {
        divide = num1 /  num2; 
    };

    calculateTwoNumbers(add, sub, divide, multiply);
}

#include <stdio.h>


