#include<stdio.h>

#define MAX 5

//assuming interger arrays of 5 elements

void addarrays(int x[], int y[]);

int main(void) {

  int a[] = { 8 , 5, 2, 6, 4 };
  int b[] = { 10, 5, 23, 14, 9 };
  addarrays(a, b);

}

void addarrays(int x[], int y[]) {

  int z[MAX];

  for (int i = 0; i < MAX; i++)
    z[i] = x[i] + y[i];

}

