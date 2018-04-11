#include <stdio.h>
#include <stdlib.h>

int i;
int x[3]={2,3,4};
int y[4]={5,6,7};   // x and y are the arrays whereas z is the array with the totals
int z[3];

int main()
{
    addarrays(x,y);
    return 0;
    }
    
 void addarrays(int a[],int b[]){
    int *p=&c;
    for(i=0;i<3:i++){
    printf("%d",x[i];
    }
    printf("\n");
    for(i=0;i<3:i++){
    printf("%d",y[i];
    }
    printf("\n");
    for(i=0;i<3:i++){
    z[i]=x[i]+y[i];
    printf("%d",z[i]);
    }
    printf("\n The address of array z is %u.",p);
