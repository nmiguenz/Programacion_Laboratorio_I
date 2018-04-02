#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maximo;
    int minimo;
    float acumulador;
    int auxiliar;
    int i;

    printf("Ingrese un numero: \n");
    scanf ("%d", &auxiliar);
    maximo = auxiliar;
    minimo = auxiliar;
    acumulador = auxiliar;

    for (i=0; i < 4; i++)
    {
        printf("Ingrese un numero: \n");
        scanf ("%d", &auxiliar);
        acumulador+=auxiliar;
        if (auxiliar>maximo)
        {
            maximo = auxiliar;
        }
        if (auxiliar<minimo)
        {
            minimo = auxiliar;
        }
    }
    printf("El maximo es %d\nEl minimo es %d\n", maximo, minimo);
    printf("El promedio es %f", acumulador /5);
    return 0;
}
