/*function addarrays()*/
int three[] = {};
void addarrays(int one[], int two[], int x) {
  int i = 0;
  while (i < x) {
    three[i] = one[i] + two[i];
    i++;
  }
}




/*Modify the function you created to return a pointer to the array containing the totals.
 Place this function in a program that also displays the values in all three arrays.*/

#include <stdio.h>
#include <stdlib.h>

int three[] = {};
int *addarrays(int one[], int two[], int x);

int main(void) {
  int i,x;
  printf("Size of the arrays: \n");
  scanf("%d",&x);
  int one[x], two[x];

  printf("First array: \n");

  for ( i = 0; i < x; i++) {
    scanf("%d", &one[i]);
  }

  printf("Second array: \n");

  for ( i = 0; i < x; i++) {
    scanf("%d", &two[i]);
  }

  int *d;
  d = addarrays(one, two, x);
  printf("array one: ");
  for (i=0; i < x; i++){
  printf("%d,", one[i]);
  }
  printf("\narray two: ");
  for (i=0; i < x; i++){
  printf("%d,", two[i]);
  }
  printf("\narray three: ");
  for (i=0; i < x; i++){
  printf("%d,", d[i]);
  }
  return 0;
}

int *addarrays(int one[], int two[], int x) {
  int i = 0;
  for (i = 0; i < x; i++) {
    three[i] = one[i] + two[i];
  }
  int *p;
  p = &three;
  return p;
}

//Kayondo Muhsin Musa 17/U/383
