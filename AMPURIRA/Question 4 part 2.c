
//AMPURIRA ANTONY  17/U/2717/PS
#include <stdio.h>
#include <stdlib.h>

    int  *addarrays(int n, int a[], int b[], int c[]);

int main()
{

     int i, a, b, c, q;
     printf("enter size of array1\n");
     scanf("%d",&a);
     printf("enter size of array2\n");
     scanf("%d",&b);
     printf("enter size of array3\n");
     scanf("%d",&c);
     int array1[a];
     int array2[b];
     int sum[c];

     printf("enter values of array1\n");
     for(i=0;i<a;i++)
     {
         printf("enter number %d\n",i);
          scanf("%d",&array1[i]);

     }
     printf("enter values of array2\n");
     for(i=0;i<b;i++)
     {
         printf("enter number &d\n",i);
         scanf("%d",&array2[i]);
     }
          q = addarrays(a, array1, array2, sum);
          printf("\n The address of sum[0] is: %x", q);

        printf("\n The elements of the sum arrays are:");
     for(i=0;i<a;i++)
     {


         printf("\t %d", sum[i]);

     }
    return 0;

 }

  int  *addarrays(int n, int a[], int b[], int c[])
 {
    int i;
    for (i=0; i<n; i++)
    {
        c[i] = a[i] +b[i];
    }
    return c;

}

