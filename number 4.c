#include<stdio.h>
#include<stdlib.h>
int i;
int a[3]={4,6,9};//a and b are the arrays and cis the arrays with the totals
int b[3]={1,2,4};
int c[3];
void addarrays( int a[], int b[]);
int main()
{
  addarrays(a, b);
  return 0;
 }
void addarrays (int a[], int b[])
{
  int *p=&c;
  for(i=o, i<3, i++)
  {
  printf("%d", a[i]);
  }
  printf("\n");
  for(i=0,i<3, i++){
  printf("%d", b[i]);
  }
  printf("\n");
  for(i=0,i<3, i++){
  c[i]=a[i]+b[i];
  printf("&d", c[i]);
 } 
  printf("\nThe addressof array c is %u", p);
  }
