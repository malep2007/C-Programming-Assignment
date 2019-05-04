/*Modified function to return pointer to the array and display the values in all three arrays*/
#include <stdio.h>
#include <stdlib.h>
int C[] = {};
int *addarrays(int A[], int B[], int x);
int main(void)
    {
      int i,x;
      printf("Enter the size of the arrays: \n");
      scanf("%d",&x);
      int A[x],B[x];
      printf("Enter the first array:\n");
      for (i=0;i<x;i++)
        {
            scanf("%d",&A[i]);
        }
        printf("Enter the second array: \n");
        for (i=0;i<x;i++)
            {
                scanf("%d",&B[i]);
            }

            int *C;
            C = addarrays(A,B,x);
            printf("Array one: ");
            for (i=0;i<x;i++)
                {
                    printf("%d,",A[i]);
                }
                printf("\nArray two: ");
                for (i=0;i<x;i++)
                    {
                printf("%d,",B[i]);
                    }
                    printf("\nArray three: ");
                    for (i=0;i< x;i++)
                    {
                        printf("%d,",C[i]);
                    }
}

int *addarrays(int A[], int B[], int x)
    {
        int i = 0;
        for (i=0;i<x;i++)
    {
        C[i]=A[i]+B[i];
    }
  int *p;
  p = &C;
  return p;
}

