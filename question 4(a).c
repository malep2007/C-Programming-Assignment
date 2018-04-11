#include <stdio.h>
#include <stdlib.h>

void addarray( int elements1[], int elements2[],int total_elements[],int SIZE)
{
    for(int i;i<SIZE;i++){ total_elements[i]=elements1[i]+elements2[i];};
}
