void addarrays(int array1[], int array2[], int sum_array[], int SIZE){
      for(int i=0;i<SIZE;i++){
          sum_array[i] = array1[i] + array2[i];
    }
}





#include <stdio.h>
#include <stdlib.h>
 int *addarrays(int array1[], int array2[], int SIZE);
 main(){
int array1[] = {7,8,67,24,20};
int array2[] = {54,10,31,63,12};
 int *array3 = addarrays(array1, array2, 5);
     for(int i=0;i<5;i++) {
        printf("%d \n", array3[i]);
        }
}
int *addarrays(int array1[], int array2[], int length){
     int *sum_array = malloc(length * sizeof(int));
     for(int i=0;i<length;i++){
          sum_array[i] = array1[i] + array2[i];
          }
     return sum_array; }









