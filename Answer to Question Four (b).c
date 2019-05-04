
#include <stdio.h>
#include <stdlib.h>

int *addarrays(int array1[5], int array2[5], int length);

int main()
{
    int array1[5] = {2,5,3,22,6};
    int array2[5] = {13,143,11,10,121};

    int *array3 = addarrays(array1, array2, 5);
    for(int i=0; i<5; i++)
    {
        printf("%d \n", array3[i]);
    }
}

int *addarrays(int array1[5], int array2[5], int length)
{
    int *destination_array = malloc(length * sizeof(int));
    
    for(int i=0; i<length; i++)
    {
        destination_array[i] = array1[i] + array2[i];
    }
    return destination_array;
}
