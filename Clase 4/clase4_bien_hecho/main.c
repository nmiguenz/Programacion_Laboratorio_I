#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
/* Si uso el "getINT"

int main()
{
    int edad;
    if (getInt (&edad , "Edad?", "El rango edad es [0-199]", 0, 199, 2)==0)
    {
        printf("\nLa edad es: %d\n",edad);
    }
    else
    {
        printf("\nError\n");
    }
return 0;
}

*/

/* Si uso el "getFLOAT"*/
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
/**/

/* Si uso "getCHAR"
int main()
{
    char caracter;
    if (getChar (&precio , "Ingrese Opcion [A][B][C]", "Solo [A][B][C]", 'A', 'C', 2)==0)
    {
        printf("\nContinuar: %c\n",precio);
    }
    else
    {
        printf("\nError\n");
    }
return 0;
}
*/
