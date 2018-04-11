#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAXINT 32767
#define MININT -32768

int getInt (int* resultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int sumaEnteros(int x, int y, int *z);
int restaEnteros(int x, int y, int *z);
int divisionEnteros(int x, int y, float *z);
int multilpicarEnteros(int x, int y, int *z);

int main()
{
    char seguir='s';
    int opcion=0;
    int A, B;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                if (getInt (&A , "Ingrese el 1er operando", "El operando se encuentra fuera del rango [-32768 - 32767]", -32768, 32767, 2)==0)
                {

                }
                else
                {
                    printf("\nError\n");
                }
                break;
            case 2:
                if (getInt (&B , "Ingrese el 2do operando", "El operando se encuentra fuera del rango [-32768 - 32767]", -32768, 32767, 2)==0)
                {

                }
                else
                {
                    printf("\nError\n");
                }
                break;
            case 3:
                if(sumaEnteros(A , B, &total) == 0)
                {
                    printf("El resultado de la suma es %d",total);
                }
                else
                {
                    printf("Error overflow");
                }
                break;
            case 4:
                if(restarEnteros(A , B, &total) == 0)
                {
                    printf("El resultado de la resta es %d",total);
                }
                else
                {
                    printf("Error overflow");
                }
                break;
            case 5:
                if(divisionEnteros(A , B, &total) == 0)
                {
                    printf("El resultado de la division es %.2f",total);
                }
                else
                {
                    printf("Error overflow");
                }
                break;
            case 6:
                if(multiplicarEnteros(A , B, &total) == 0)
                {
                    printf("El resultado de la multiplicacion es %d",total);
                }
                else
                {
                    printf("Error overflow");
                }
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
