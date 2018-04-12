#include <stdio.h>
#include <stdlib.h>
//adding values of an array and placing them in another array
int addarrays()
{
    int size;
    int array1[size]={/*array values*/}
    int array2[size]={/*array values*/}
    int result[size];
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
    return 0;
}
