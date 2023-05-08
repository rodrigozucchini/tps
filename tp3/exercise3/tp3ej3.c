#include <stdio.h>

int showTwoNumberAdd() {
        int numberIn1;
        int numberIn2;
        int numberInAddTwo;

        printf("Este es el tercer ejercicio del trabajo practico 3, retornaremos la suma de dos numeros. \n");
        printf("Ingrese el primer numero ...  \n");
        scanf("%d", &numberIn1);
        printf("Ingrese el segundo numero ...  \n");
        scanf("%d", &numberIn2);
        numberInAddTwo = numberIn1 + numberIn2;
        return numberInAddTwo;
}


int main()
{
    int result;

    result = showTwoNumberAdd();

    printf("Los numeros ingresados sumados dan %d", result);
    return 0;
}