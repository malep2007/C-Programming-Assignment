#include <stdio.h>
#include <stdlib.h>

//a
//function named addarrays() that accepts two arrays that are of the same size. The function should add each element in the arrays together and place them in a third array

int main()
{

  void addarrays(int array1[], int array2[], int array3[], int SIZE){
      int i;
        for(i=0;i<SIZE;i++){
            array3[i] = array1[i] + array2[i];
        }
  }
}

//Modify the function you created in to return a pointer to the array containing the totals. Place this function in a program that also displays the values in all three arrays
#include <stdio.h>
int *addarrays(int array1[], int array2[], int SIZE);
main(){
    int array1[] = {2,5,3,22,6};
    int array2[] = {13,143,11,10,121};
    int *array3 = addarrays(array1, array2, 5);
    int i;
    for(i=0;i<5;i++) {
        printf("%d \n", array3[i]);
        }
    }
    int *addarrays(int array1[], int array2[], int length){
    int *destination_array = malloc(length * sizeof(int));
    int i;
    for(i=0;i<length;i++){
        destination_array[i] = array1[i] + array2[i];
}

return destination_array;
    }

