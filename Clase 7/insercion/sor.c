#include <stdio.h>
#include <stdlib.h>
#define SIZE_ARRAY 10

void sor_insertion (int* array, int size)
{
    int i, j;
    int temp;
    for (i=1; i<size;i++)
    {
        temp = array[i];
        j = i-1;
        while(j>=0 && temp<array[j])
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1]=temp;
    }
}
