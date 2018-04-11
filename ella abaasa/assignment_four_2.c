/*Modify the function you created to return a pointer to the array containing the totals.
 Place this function in a program that also displays the values in all three arrays.*/

#include <stdio.h>
#include <stdlib.h>

int array3[] = {};
int *addarrays(int array1[], int array2[], int n);

int main(void) {
  int i,n;
  printf("Enter the size of the arrays: \n");
  scanf("%d",&n);
  int array_one[n], array_two[n];

  printf("Enter the first array: \n");

  for ( i = 0; i < n; i++) {
    scanf("%d", &array_one[i]);
  }

  printf("Enter the second array: \n");

  for ( i = 0; i < n; i++) {
    scanf("%d", &array_two[i]);
  }

  int *x;
  x = addarrays(array_one, array_two, n);
  printf("array one: ");
  for (i=0; i < n; i++){
  printf("%d,", array_one[i]);
  }
  printf("\narray two: ");
  for (i=0; i < n; i++){
  printf("%d,", array_two[i]);
  }
  printf("\narray three: ");
  for (i=0; i < n; i++){
  printf("%d,", x[i]);
  }
  return 0;
}

int *addarrays(int array1[], int array2[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    array3[i] = array1[i] + array2[i];
  }
  int *p;
  p = array3;
  return p;
}
