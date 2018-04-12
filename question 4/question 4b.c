

#include<stdio.h>
#include<stdlib.h>
int *addarrays();
int main()
{
   addarrays();
}
int *addarrays()
{
     int i,A,B,C;


    printf("enter the size of array 1:\n");
    scanf("%d", &A);
    printf("enter the size of array 2:\n");
    scanf("%d", &B);
    printf("enter the size of sum array:\n");
    scanf("%d", &C);
    int arr1[A];
    int arr2[B];
    int *sum[C];
    if (x=B)
    {
        printf("arrays are equal.\n");

    }
    else
    {
       printf("can not continue since the size of array1 and array 2 are not equal.");
       exit(0);


    }



        printf("Enter values for array 1\n");
     for(i=0; i<A;i++)
     {
         printf("Enter number %d\n", i);
         scanf("%d", &arr1[i]);
     }
     printf("Enter values for array 2\n");
     for(i=0; i<B;i++)
     {
         printf("Enter number %d\n", i);
         scanf("%d", &arr2[i]);
     }
     for(i=0; i<C;i++)
     {
         sum[i] = arr1[i] + arr2[i];
         printf("\nthe sum of %d and %d is %d", arr1[i],arr2[i],sum[i]);
     }

}
