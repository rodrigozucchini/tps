#include <stdio.h>

int showNumberForTwo() {
        int numberIn;
        int numberInForTwo;

        printf("Este es el segundo ejercicio del trabajo practico 3, retornaremos el valor que ponga el usuario por pantalla multiplicado por dos. \n");
        printf("Ingrese un numero ...  \n");
        scanf("%d", &numberIn);
        numberInForTwo = numberIn * 2;
        return numberInForTwo;
}


int main()
{
    int result;

    result = showNumberForTwo();

    printf("El numero ingresado multiplicado por dos da %d", result);
    return 0;
}