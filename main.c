#include <stdio.h>
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


