#include <stdio.h>
#include <stdlib.h>

int numbers[] = {};
int *addarrays(int no1[], int no2[], int n);

int main(void) {
  int i,n;
  printf("Enter the size of the arrays: \n");
  scanf("%d",&n);
  int array_first[n], array_second[n];

  printf("Enter First array: \n");

  for ( i = 0; i < n; i++) {
    scanf("%d", &array_first[i]);
  }

  printf("Enter Second array: \n");

  for ( i = 0; i < n; i++) {
    scanf("%d", &array_second[i]);
  }

  int *y;
  y = addarrays(array_first, array_second, n);
  printf("array one: ");
  for (i=0; i < n; i++){
  printf("%d,", array_first[i]);
  }
  printf("\narray two: ");
  for (i=0; i < n; i++){
  printf("%d,", array_second[i]);
  }
  printf("\nresults array: ");
  for (i=0; i < n; i++){
  printf("%d,", numbers[i]);
  }
  return 0;
}

int *addarrays(int no1[], int no2[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    numbers[i] = no1[i] + no2[i];
  }
  int *x;
  x = numbers;
  return x;
}
