#include <stdio.h>
#include <stdlib.h>

int getInt (int* resultado,
            char* mensaje,
            char* mensajeError,
            int minimo,
            int maximo,
            int reintentos)
{
    int retorno = -1;
    long auxiliarLong;
    do
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%ld", &auxiliarLong);
        if (auxiliarLong>=minimo && auxiliarLong<=maximo)
        {
            *resultado = (int) auxiliarLong;
            retorno = 0;
            break;
        }
        printf("%s", mensajeError);
    }while (reintentos >=0);
    return retorno;
}

int getFloat(float* resultado,
            char* mensaje,
            char* mensajeError,
            float minimo,
            float maximo,
            int reintentos)
{
    int retorno = -1;
    double auxiliarLong;
    do
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%lf", &auxiliarLong);
        if (auxiliarLong>=minimo && auxiliarLong<=maximo)
        {
            *resultado = (float) auxiliarLong;
            retorno = 0;
            break;
        }
        printf("%s", mensajeError);
    }while (reintentos >=0);
    return retorno;
}

int getChar(char* resultado,
            char* mensaje,
            char* mensajeError,
            char minimo,
            char maximo,
            int reintentos)
{
    int retorno = -1;
    char auxiliarLong;
    do
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%c", &auxiliarLong);
        if (auxiliarLong>=minimo && auxiliarLong<=maximo)
        {
            *resultado = auxiliarLong;
            retorno = 0;
            break;
        }
        printf("%s", mensajeError);
    }while (reintentos >=0);
    return retorno;
}
