#include <stdio.h>
#include <stdlib.h>
#include "lib_maths.h"
#include "lib_maths.c"

int sumaEnteros (int x, int y, int *resultado);
float divisionEnteros (float x, float y, float *resultado);

int main()
{
    int primerNumero, segundoNumero;
    float total;
    char operando;

    printf("Ingrese el 1\247 numero: ");
    scanf("%d", &primerNumero);
    printf("Ingrese el 2\247 numero: ");
    scanf("%d", &segundoNumero);
    printf("Ingrese el caracter de la operacion que quiere realizar [+,-,*,/] ");
    fflush(stdin);
    scanf("%c", &operando);
    switch (operando)
    {
        case '+':
            if ( sumaEnteros(primerNumero, segundoNumero, &total) ==0)
            {
                printf("\nEl total de la suma es: %0.f\n", total);
            }
            else
            {
                printf("\nError over flow\n");
            }
        case '/':
            if ( divisionEnteros(primerNumero, segundoNumero, &total) ==0)
            {
                printf("\nEl resultado de la division es: %.2f\n", total);
            }
            else
            {
                printf("\nError over flow\n");
            }
    }

    /*if ( sumaEnteros(primerNumero, segundoNumero, &total) ==0)
    {
        printf("\nEl total de la suma es: %d\n", total);
    }
    else
    {
        printf("\nError over flow\n");
    }
*/
    return 0;
}
