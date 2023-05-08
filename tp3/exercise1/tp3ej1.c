#include <stdio.h>

int showNumber() {
        int numberIn;
        printf("Este es el primer ejercicio del trabajo practico 3, retornaremos el valor que ponga el usuario por pantalla. \n");
        printf("Ingrese un numero ...  \n");
        scanf("%d", &numberIn);
        return numberIn;
}


int main()
{
    int result;

    result = showNumber();

    printf("El numero ingresado es %d", result);
    return 0;
}
