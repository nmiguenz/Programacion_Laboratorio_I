#include <stdio.h>
#include <stdlib.h>

#define SIZE_ARRAY 5

//float calcularPromedio (int valores [], int cantidad);
int calcularPromedioVersion2(int valores[], int cantidad, float *resultado);

int main()
{
    int numero [SIZE_ARRAY];
    int i;
    float promedio;
    int maximo = 0;

    for (i=0; i<SIZE_ARRAY; i++)
    {
        printf("Ingrese el %d\247 numero:\n", i+1);
        scanf("%d", &numero[i]);
    }
    //Version 1 del promedio
    //promedio = calcularPromedio(numero, SIZE_ARRAY);

    if (calcularPromedioVersion2(numero, SIZE_ARRAY, &promedio)==0)
    {
        printf("\nEl promedio es %.2f\n", promedio);
    }
    else
    {
        printf("\nError en ingreso del array");
    }

    maximo = numero [0];
    for (i=0; i<SIZE_ARRAY; i++)
    {

        if (numero[i]> maximo)
        {
            maximo = numero[i];
        }
    }
    printf("El numero maximo es: %d", maximo);
    return 0;
}
/*
float calcularPromedio (int valores [], int cantidad)
{
    int i;
    int suma = 0;
    float prom;
    for (i=0; i<cantidad; i++)
    {
        suma = suma + valores[i];
    }
    prom = ((float) suma) / cantidad;
    return prom;
}
*/
// Version 2 de la fx calcularPromedio con verificación de datos.

int calcularPromedioVersion2(int valores[], int cantidad, float *resultado)
{
    int i;
    int suma = 0;
    int retorno;
    if (cantidad <=0 || resultado==NULL)
    {
        retorno = -1;
    }
    else
    {
        retorno = 0;
    }

    for (i=0; i<cantidad; i++)
    {
        suma = suma + valores[i];
    }
    *resultado = ((float) suma) / cantidad;
    return retorno;
}
