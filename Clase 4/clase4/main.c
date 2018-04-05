#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Ingrese su edad");
    scanf("%d", &edad);
    if (getInt("Edad?", "[0-150]", 2, 150,0, &edad) == 0)
    {
        printf("Su edad es %d y esta dentro del rango correcto.");
    }
    else
    {
        printf("Usted no ha ingresado una edad valida luego de 5 intentos");
    }

    return 0;
}

int getInt (char* mensaje, char* mensajeError, int reintentos, int maximo, int minimo, int* resultado)
{
    int edadUsuario;
    int flagRetorno = -1;
    printf("Ingrese su edad");
    do
    {
        scanf("%d", &edadUsuario)
        if (edadUsuario => minimo && edadUsuario<=maximo)
        {
            *mensaje = edadUsuario;
            flagRetorno = 0;
            break;
        }
        else
        {
            *mensajeError = edadUsuario;
            printf("Ingrese una edad valida [0-150]");
        }
    } while (reintentos <= 2 );

    return flagRetorno;
}
