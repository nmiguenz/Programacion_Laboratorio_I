#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    if (getFloat (&edad , "Edad?", "El rango edad es [0-199]", 0, 199, 2)==0)
    {
        printf("\nLa edad es: %f\n",edad);
    }
    else
    {
        printf("\nError\n");
    }
return 0;
}
