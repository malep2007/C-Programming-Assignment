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

  int *p;
  p = addarrays(array_one, array_two, n);
  printf("array one: ");
  for (i=0; i < n; i++){
  printf("%d,", array_one[i]);
  }
  printf("\narray two: ");
  for (i=0; i < n; i++){
  printf("%d,", array_two[i]);
  }
  printf("\narray3: ");
  for (i=0; i < n; i++){
  printf("%d,", p[i]);
  }
  return 0;
}

int *addarrays(int array1[], int array2[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    array3[i] = array1[i] + array2[i];
  }
  int *t;
  t = array3;
  return t;
}
