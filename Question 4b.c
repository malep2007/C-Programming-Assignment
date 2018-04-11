#include<stdio.h>

int *addarrays(int arr1[], int arr2[], int SIZE);

int main()
{
    int arr1[] = {7,89,21,3};
    int arr2[] = {5,67,9,81};
    int i;

    int *arr3 = addarrays(arr1, arr2, 4);
    for(i=0; i<4; i++){
    printf("arr3[%d] = %d\n", i,arr3[i]);
    }
    return 0;
}
int *addarrays(int arr1[], int arr2[], int SIZE)
{
    int *final_arr = malloc(SIZE*sizeof(int));
    int i;
    for(i=0; i<SIZE; i++){
    final_arr[i]= arr1[i] + arr2[i];
    }
    return final_arr;
}

