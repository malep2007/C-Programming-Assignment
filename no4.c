/*function addarrays()*/
int c[] = {};
void addarrays(int a[], int b[], int x) {
  int i = 0;
  while (i < x) {
    c[i] = a[i] + b[i];
    i++;
  }
}




/*Modification to return pointer as well as display the values from the three arrays*/

#include <stdio.h>
#include <stdlib.h>

int c[] = {};
int *addarrays(int a[], int b[], int x);

int main(void) {
  int i,x;
  printf("Size of the arrays: \n");
  scanf("%d",&x);
  int a[x], b[x];

  printf("First array: \n");

  for ( i = 0; i < x; i++) {
    scanf("%d", &a[i]);
  }

  printf("Second array: \n");

  for ( i = 0; i < x; i++) {
    scanf("%d", &b[i]);
  }

  int *d;
  d = addarrays(a,b, x);
  printf("array one: ");
  for (i=0; i < x; i++){
  printf("%d,", a[i]);
  }
  printf("\narray two: ");
  for (i=0; i < x; i++){
  printf("%d,", b[i]);
  }
  printf("\narray three: ");
  for (i=0; i < x; i++){
  printf("%d,", d[i]);
  }
  return 0;
}

int *addarrays(int a[], int b[], int x) {
  int i = 0;
  for (i = 0; i < x; i++) {
    c[i] = a[i] + b[i];
  }
  int *p;
  p = &c;
  return p;
}

//Hosni Mubaraq Bwanika 17/U/3772/PS
