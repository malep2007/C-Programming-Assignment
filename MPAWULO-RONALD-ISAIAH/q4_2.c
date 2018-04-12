//MPAWULO RONALD ISAIAH BSc TELECOMMUNICATIONS ENGINEERING 17/U/569
#include <stdio.h>
#include <stdlib.h>

int results[] = {};
int *addarrays(int array1[], int array2[], int n);

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
    for (i=0; i < n ; i++)  {
  printf("%d,", array_first[i]);
  }
  printf("\n array two: ");
  for (i=0; i < n; i++){
  printf("%d,", array_second[i]);
  }
  printf("\nresults array: ");
  for (i=0; i < n; i++){
  printf("%d,", y[i]);
  }
  return 0;
}

int *addarrays(int array1[], int array2[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    results[i] = array1[i] + array2[i];
  }
  int *x;
  x = results;
  return x;
}
