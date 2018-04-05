#include <stdio.h>
#include <stdlib.h>

int getFloat(float* resultado,
            char* mensaje,
            char* mensajeError,
            float minimo,
            float maximo,
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
