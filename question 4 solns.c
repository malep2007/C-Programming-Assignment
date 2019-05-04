#include <stdio.h>
#define SIZE 4

void addarrays(int first[],int second[]);


int main()
{
    int a[SIZE]={1,9,5,8};
    int b[SIZE]={7,4,6,11};

    addarrays(a,b);
    return 0;
}
void addarrays(int first[],int second[])
{
    int sum[SIZE];
    int *ptr_sum=&sum[0];

    int m=0;
    for(m=0;m<SIZE;m++)
    {
        sum[m]=first[m]+second[m];
        printf("%d+%d=%d\n",first[m],second[m],sum[m]);
    }
}
