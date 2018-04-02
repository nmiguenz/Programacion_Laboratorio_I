#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a;
	int b;
	int resultado;

	do
    {
        printf("\nIngrese 1\247 numero: ");
        scanf("%d",&a);
        if (a ==0)
        {
            printf("\nIngrese un numero distinto de 0: ");
            scanf("%d",&a);
        }
    }while (a==0);

	do
    {
        printf("\nIngrese 2\247 numero: ");
        scanf("%d",&b);
        if (b ==0)
        {
            printf("\nIngrese 2\247 numero: ");
            scanf("%d",&b);
        }
    }while (b==0);

	resultado=a-b;
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0)
    {
        printf("\nResultado positivo \n");
	}
	if(resultado<0)
    {
        printf("\nResultado negativo \n");
	}
	return 0;
}
