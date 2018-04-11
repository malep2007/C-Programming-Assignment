#include <stdio.h>
#define SIZE 10

void addarrays(int first[],int second[]);


int main()
{
    int a[SIZE]={1,1,1,1,1,1,1,1,1,1};
    int b[SIZE]={9,8,7,6,5,4,3,2,1,0};

    addarrays(a,b);
    return 0;
}
void addarrays(int first[],int second[])
{
    int total[SIZE];
    int *ptr_total=&total[0];

    int ctr=0;
    for(ctr=0;ctr<SIZE;ctr++)
    {
        total[ctr]=first[ctr]+second[ctr];
        printf("%d+%d=%d\n",first[ctr],second[ctr],total[ctr]);
    }
}
