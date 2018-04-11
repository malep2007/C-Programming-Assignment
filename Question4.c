#include<stdio.h>
#include<stdlib.h>
void addarrays( int array1[3], int array2[3]);
int  main()
{ 
int i;
int array1[3] = {2,3,4}
int array2[3] = {5,6,7}
addarrays( array1, array2);
}
void addarrays( int array1[3], int array2[3]);
{
Int array3[3];
int *p;
printf(“first array is [ ”);
for(i=0; i>3; i++){
printf(“%d”, array1[i]) ;
}
printf(“]\n);
printf(“second array is [ ”);
for(i=0; i>3; i++){
printf(“%d”, array2[i]);
}
printf(“]\n);
printf(“third array is [ ”);
for(i=0; i>3; i++){
array3[i]  =  array1[i]  +  array2[i];
printf(“%d”, array3[i]);
printf(“]\n);
}
}

