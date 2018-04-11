#include <stdio.h>
#define SIZE 4

void addarrays(int first[],int second[]);


int main()
{
    int a[SIZE]={1,3,5,8};
    int b[SIZE]={2,4,6,11};

    addarrays(a,b);
    return 0;
}
void addarrays(int first[],int second[])
{
    int sum[SIZE];
    int *ptr_sum=&sum[0];

    int j=0;
    for(j=0;j<SIZE;j++)
    {
        sum[j]=first[j]+second[j];
        printf("%d+%d=%d\n",first[j],second[j],sum[j]);
    }
}
