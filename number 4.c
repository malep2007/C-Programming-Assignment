//ans i:
#include <stdio.h>
#include <stdlib.h>
int main(){
 void addarrays(int array1[], int array2[], int final_array[], int SIZE){
  int i;
  for(i=0; i<SIZE; i++){
  final_array[i] = array1[i]+array2[i];
  }
} }



//ans ii:
#include <stdio.h>
#include <stdlib.h>

  int *addarrays(int array1[], int array2[], int SIZE);

main(){
  int array1[]= {1,2,3,4,5};
  int array2[]= {6,7,8,9,10};
  int *array3=addarrays(array1,array2,5);
  int i;
  for(i=0; i<5; i++){
       printf("%d\n",array3[i]);
        }
       }

  int *addarrays(int array1[], int array2[], int length){
  int*final_array = malloc(length*sizeof(int));
  int i;
  for(i=0; i<length; i++){
    final_array[i]= array1[i] + array2[i];
     }
    return final_array;
    }

