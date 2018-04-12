#include <stdio.h>
#include <stdlib.h>
//assigining a pointer to the result of the addition to the arrays and printing it
int addarrays()
{
    int size,*point;
    int array1[size]={/*array values*/}
    int array[size]={/*array values*/}
    int result[size];
    point = result;
    int i;
    for(i=0;i<size;i++)
    {
        result[i]=array1[i]+array2[i];
        printf("result is %d\n",result[i]);

    }
    return 0;
}
int main()
{
    addarrays();
   for(i=0;i<size;i++)
   {
       printf("Array1[i] value is %d",array1[i]);

   }
   for(i=0;i<size;i++)
   {
        printf("Array2[i] value is %d",array2[i]);
   }
   printf("The values of result using pointer are\n");
   for(i=0;i<size;i++)
   {
   printf("%d\n",*(point + i));
   }
    return 0;
}

