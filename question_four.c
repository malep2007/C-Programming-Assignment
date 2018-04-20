#include <ctype.h>
#include <stdio.h>

//void add_arrays(int array1[10],int array2[10]);
//main(){
//    int array1[10]={1,2,3,4,5,6,7,8};
//    int array2[10]={6,2,9,4,5,6,7,8};
//    add_arrays(array1,array2);
//}
//
////This is function to get sum of two arrays
//void add_arrays(int array1[10],int array2[10]) {
//
//    int i;
//    printf("the first array is [");
//    for(i=0; i<10; i++)
//    {
//
//        printf("%d,",array1[i]);
//
//    }
//    printf("]\n");
//    printf("the second array is [");
//    for(i=0; i<10; i++)
//    {
//        printf("%d,", array2[i]);
//    }
//    printf("]\n");
//
//    printf("the third array is [");
//    for (i=0; i<10; i++)
//    {
//        printf("%d,", array1[i]+array2[i]);
//    }
//    printf("]");
//}


/*
 * Richard */
//void add_array(int arr1[],int arr2[], int size);
//main()
//{
//    int arr1[5],arr2[5],c=5,i;
//    printf("Enter the values of first array\n");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&arr1[i]);
//    }
//    printf("Enter the values of second array\n");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&arr2[i]);
//    }
//    add_array(arr1,arr2,c);
//}
//void add_array(int arr1[],int arr2[], int size)
//{
//    int D[size],j;
//    printf("Enter the values of second array\n");
//    for(j=0;j<size;j++)
//    {
//    }        D[j]=arr1[j]+arr2[j];
//
//    printf("The values of third array are\n");
//    for(j=0;j<size;j++)
//    {
//        printf("%d   ",D[j]);
//    }
//
//}

//This is how I would go about it
#define SIZE 10

//TODO 1: Declare a function called add_arrays(arg1, arg2) that takes arguments of array data type
void add_array(int arr1[SIZE], int arr2[SIZE]);
main() {
    int arr1[SIZE] = {1,2,3,4,5};
    int arr2[SIZE] = {1,2,3,4,5};

    add_array(arr1, arr2);
}
//TODO 2: Define how the function will operate
void add_array(int arr1[SIZE], int arr2[SIZE]){
    //TODO 3: Declare two pointers which will access the arrays' addresses
    int *ptr1, *ptr2, sum[10];
    ptr1 = arr1; ptr2 = arr2;

    // Because our pointers now have the addresses of the arrays, we can increment the addresses and add each
    // value element of each array

    for(int i = 0; i < SIZE; i ++){
        sum[i] = *ptr1 + *ptr2;
        ptr1++; ptr2 ++;

        printf("%d, ", sum[i]);
    }
}