
/*........a program with different arrays.........*/

#include <stdio.h>

void addarrays(int array1[5], int array2[5], int array3[], int length)
{
    
    for(int i=0; i<length; i++)
    {
        array3[i] = array1[i] + array2[i];
        printf("%d \n", array3[i]);
    }
}
