#include <stdio.h>
#define SIZE 6

void addarrays(int first[],int second[]);


int main()
{
    int a[SIZE]={1,3,5,7,9,11};
    int b[SIZE]={2,4,6,8,10,12};

    addarrays(a,b);
    return 0;
}
void addarrays(int first[],int second[])
{
    int sum[SIZE];
    int *ptr_sum=&sum[0];

    int i=0;
    for(i=0;i<SIZE;i++)
    {
        sum[i]=first[i]+second[i];
        printf("%d+%d=%d\n",first[i],second[i],sum[i]);
    }
}
