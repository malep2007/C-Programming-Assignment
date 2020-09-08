A function named addarrays()
#include<stdio.h>
void addarrays(int one[], int two[]);

int main()
{
    int a[size]={1,2,3,5,8};
    int b[size]={2,4,6,11};
    addarrays(a,b);
    return 0;
}

Part 2
void addarrays(int one[], int two[])
{
    int sum[size];
    int *ptr_sum=&sum[0];
}
    int j=0;
    for(j=0; j<size;j++){
            sum[j]=one[j]+two[j];
            printf("%d+%d=%d\n",one[j],two[j],sum[j]);
}
