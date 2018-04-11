#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAXINT 32767
#define MININT -32768

int getInt (int* resultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
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

int sumaEnteros(int x, int y, int *z)
{
    long resultadoAuxiliar;
    int flagRetorno = -1;
    resultadoAuxiliar = x + y;
    if(resultadoAuxiliar <= MAXINT)
    {
        *z = resultadoAuxiliar;
        flagRetorno = 0;
    }
    return flagRetorno;
}

int restaEnteros(int x, int y, int *z)
{
    long resultadoAuxiliar;
    int flagRetorno = -1;
    resultadoAuxiliar = x - y;
    if(resultadoAuxiliar <= MININT)
    {
        *z = resultadoAuxiliar;
        flagRetorno = 0;
    }
    return flagRetorno;
}

int divisionEnteros(int x, int y, float *z)
{
    long resultadoAuxiliar;
    int flagRetorno = -1;
    resultadoAuxiliar = (float)x / y;
    if(resultadoAuxiliar <= MININT && y!=0)
    {
        *z = resultadoAuxiliar;
        flagRetorno = 0;
    }
    return flagRetorno;
}

int multilpicarEnteros(int x, int y, int *z)
{
    long resultadoAuxiliar;
    int flagRetorno = -1;
    resultadoAuxiliar = x * y;
    if(resultadoAuxiliar <= MAXINT)
    {
        *z = resultadoAuxiliar;
        flagRetorno = 0;
    }
    return flagRetorno;
}
