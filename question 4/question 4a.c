#include<stdio.h>
void addarrays(int arr1[],int arr2[],int size);
int main()
{
    int X[7],Y[7],i;
    int size=7;
    printf("Enter the elements of array X\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&X[i]);
    }
        printf("Enter the elements of array Y\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Y[i]);
    }
    addarrays(X,Y,size);
}
void addarrays(int arr1[],int arr2[],int size)
{
    int i;
    int arr3[size];
    for(i=0;i<size;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr3[i]);
    }

}


