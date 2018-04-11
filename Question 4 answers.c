#include <stdio.h>
#define SIZE 4

void addarrays(int first[],int second[]);


int main()
{
    int a[SIZE]={1,2,3,4};
    int b[SIZE]={9,8,7,6};

    addarrays(a,b);
    return 0;
}
void addarrays(int first[],int second[])
{
    int total[SIZE];
    int *ptr_total=&total[0];

    int c=0;
    for(c=0;c<SIZE;c++)
    {
        total[c]=first[c]+second[c];
        printf("%d+%d=%d\n",first[c],second[c],total[c]);
    }
}
