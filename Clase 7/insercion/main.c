#include <stdio.h>
#include <stdlib.h>
#define SIZE_ARRAY 10

void sor_insertion (int *array, int size);

int main()
{
    int array [SIZE_ARRAY] = {25,45,78,20,4,6,9,10,7,11};
    int i;

    for (i=0; i<SIZE_ARRAY; i++)
    printf("%d|", array[i]);

    sor_insertion (array, SIZE_ARRAY);
    printf("\n");

    for (i=0; i<SIZE_ARRAY; i++)
    printf("%d|", array[i]);

    return 0;
}
