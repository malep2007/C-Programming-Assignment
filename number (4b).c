

/*Modify the function you created to return a pointer to the array containing the totals.
 Place this function in a program that also displays the values in all three arrays.*/

#include <stdio.h>
#include <stdlib.h>

int c[] = {};
int *addarrays(int a[], int b[], int n);

int main(void) {
  int i,n;
  printf("Enter the size of the arrays: \n");
  scanf("%d",&n);
  int a[n], b[n];

  printf("Enter the first array: \n");

  for ( i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the second array: \n");

  for ( i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }

  int *x;
  x = addarrays(a, b, n);
  printf("array one: ");
  for (i=0; i < n; i++){
  printf("%d,", a[i]);
  }
  printf("\narray two: ");
  for (i=0; i < n; i++){
  printf("%d,", b[i]);
  }
  printf("\narray three: ");
  for (i=0; i < n; i++){
  printf("%d,", x[i]);
  }
  return 0;
}

int *addarrays(int array1[], int b[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    c[i] = a[i] + b[i];
  }
  int *p;
  p = c;
  return p;
}

