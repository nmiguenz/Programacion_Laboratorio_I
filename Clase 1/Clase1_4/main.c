#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 10

int main()
{
    int numero;
    int positivo = 0, negativo = 0;
    int i;

    for (i=0; i<MAXNUM; i++)
    {
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    if (numero>0)
        {
            positivo++;
        }
        if (numero<0)
        {
            negativo++;
        }
    }

    printf("La cantidad de numeros positivos es : %d\n\nLa cantidad de numeros negativos es: %d",positivo, negativo );
    return 0;
}
