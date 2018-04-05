#include <stdio.h>
#include <stdlib.h>
long factorial2 (int numero);

int main()
{
    long resFactorial;
    factorial (10, &resFactorial);
    printf("%ld", resFactorial);

    printf("\n%ld", factorial2 (10));
    return 0;
}

int factorial (int numero, long* resultado)
{
    long auxiliarResultado;
    auxiliarResultado = numero;
    while (numero > 1)
    {
        numero--;
        auxiliarResultado = auxiliarResultado * numero;
    }
    *resultado = auxiliarResultado;
    return 0;
}


long factorial2 (int numero)
{
    long resultado;
    if (numero == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial2 (numero - 1);
    }
    return resultado;
}
