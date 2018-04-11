/*Modify the function you created to return a pointer to the array containing the totals.
 Place this function in a program that also displays the values in all three arrays.*/

#include <stdio.h>
#include <stdlib.h>

int three[] = {};
int *addarrays(int one[], int two[], int n);

int main(void) {
  int i,v;
  printf("Enter the size of the arrays: \n");
  scanf("%d",&v);
  int array_one[v], array_two[v];

  printf("Enter the first array: \n");

  for ( i = 0; i < v; i++) {
    scanf("%d", &array_one[i]);
  }

  printf("Enter the second array: \n");

  for ( i = 0; i < v; i++) {
    scanf("%d", &array_two[i]);
  }

  int *x;
  x = addarrays(array_one, array_two, v);
  printf("array one: ");
  for (i=0; i < v; i++){
  printf("%d,", array_one[i]);
  }
  printf("\narray two: ");
  for (i=0; i < v; i++){
  printf("%d,", array_two[i]);
  }
  printf("\narray three: ");
  for (i=0; i < v; i++){
  printf("%d,", x[i]);
  }
  return 0;
}

int *addarrays(int array1[], int array2[], int n) {
  int i = 0;
  for (i = 0; i < v; i++) {
    three[i] = one[i] + two[i];
  }
  int *m;
  m = three;
  return m;
}
