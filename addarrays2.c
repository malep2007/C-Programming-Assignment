#include<stdio.h>

#define MAX 5

int * addarrays(int x[], int y[]);

int main(void) {

  int a[] = { 23, 56, 12, 45, 6 };
  int b[] = { 5, 78, 64, 23, 7 };

  int * c; 
  c = addarrays(a, b);

  printf("a\tb\tc\n");

  for (int i = 0; i < MAX; i++)
    printf("%d\t%d\t%d\n", a[i], b[i], c[i]);

  return 0;
}

int * addarrays(int x[], int y[]) {
  
  int z[MAX];

  for (int j = 0; j < MAX; j++)
    z[j] = x[j] + y[j];

  return z;

}
