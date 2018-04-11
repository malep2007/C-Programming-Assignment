#include <stdio.h>
#include <stdlib.h>
void addarray( int array1[10], int array2[10] );
int i;
int main()
{
    int array1[10]={2,3,4,5,6,7,8,9,1,2};
    int array2[10]={5,2,8,1,6,1,3,4,2,3};
    addarray(array1, array2);
    }
void addarray( int array1[10], int array2[10] )
{
    int array3[10];
    int *p;
    printf("first array is [");
    for (i=0; i<10; i++)
    {
       printf("%d, ",array1[i]);
    }
    printf("]\n");
    printf("second array is [");
    for (i=0; i<10; i++)
    {
       printf("%d, ",array2[i]);
    }
    printf("]\n");
    printf("third array is [");
    for(i=0; i<10;i++)
    {
        array3[i]=array2[i]+ array1[i];
        printf("%d,",array3[i]);
    }
    printf("]\n");
     printf("the addresses of the number in the array with the total are\n");
    for (i=0; i<10; i++)
    {
    p=&array3[i];
   printf("%d\n", p);
    }
}
