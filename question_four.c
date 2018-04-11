#include <stdio.h>
#include <stdlib.h>
void addarrays(int a[],int b[]);
int i;
int a[4]={2,3,4,5};
int b[4]={1,4,8,9};
int c[3];
int main()
{
  addarrays(a,b);
  return 0;
}
void addarrays(int a[],int b[])
{
   for(i=0;i<4;i++) 
   {
   printf("%d",a[i]);
   }
   printf("\n");
   for(i=0;i<4;i++) {
    printf("%d",b[i]);
   }
    printf("\n");
   for(i=0;i<4;i++) {
   c[i]=a[i]+b[i];
    printf("%d",c[i]);
    }
 }
 
 #include <stdio.h>
#include <stdlib.h>
void addarrays(int a[],int b[]);
int i;
int a[4]={2,3,4,5};
int b[4]={1,4,8,9};
int c[3];
int main()
{
  addarrays(a,b);
  return 0;
}
void addarrays(int a[],int b[])
{
   int *p=&c;
   for(i=0;i<4;i++) 
   {
   printf("%d",a[i]);
   }
   printf("\n");
   for(i=0;i<4;i++) {
    printf("%d",b[i]);
   }
    printf("\n");
   for(i=0;i<4;i++) {
   c[i]=a[i]+b[i];
    printf("%d",c[i]);
    }
    printf("\n The address of array c is %u",p);
}
 }
