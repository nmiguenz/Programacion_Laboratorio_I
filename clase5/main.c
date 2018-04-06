#include <stdio.h>
#include <stdlib.h>
#define SIZE_ARRAY 5


int main()
{
    int numero [SIZE_ARRAY];
    int i, sumaNumero = 0;
    float promedio;
    int maximo = 0;

    for (i=0; i<SIZE_ARRAY; i++)
    {
        printf("Ingrese el %d\247 numero:\n", i+1);
        scanf("%d", &numero[i]);
    }

    for (i=0; i<SIZE_ARRAY; i++)
    {
        sumaNumero = sumaNumero + numero[i];
    }
        promedio = (float) sumaNumero / SIZE_ARRAY;
        printf("\nEl promedio de la suma es %.2f\n", promedio);

    maximo = numero [0];
    for (i=0; i<SIZE_ARRAY; i++)
    {

        if (numero[i]> maximo)
        {
            maximo = numero[i];
        }
    }
    printf("\El numero maximo es: %d", maximo);
    return 0;
}
/*
int main()
{
    if (getFloat (&precio , "¿Cual es el precio?", "El rango de precio es de [0-100000]", 0, 100000, 2)==0)
    {
        printf("\nEl precio es igual a: %.2f\n",precio);
    }
    else
    {
        printf("\nError\n");
    }
return 0;
}
*/
