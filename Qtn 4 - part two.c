#include <stdio.h>

/*program that also displays the values in all three arrays*/

int *addarrays(int 1starray[], int 2ndarray[], int SIZE);

int main()
{
  int firstarray[] = {12,23,33,44,55};
  int secondarray[] = {33, 4, 5, 5, 5, 5 ,5};
  
  int *thirdarray = addarrays(1starray, 2ndarray, 5);
  
  for (int i=0; i < 5; i++)
    printf("%d \n", thirdarray[i]);
}

int *addarrays(int firstarray[], int secondarray[], int length)
{
  int *destnarray = malloc(length * sizeof(int));
  
  for (int i=0; i < length; i++)
  {
    destnarray[i] = firstarray[i] + secondarray[i];
  }
  return destnarray;
}
