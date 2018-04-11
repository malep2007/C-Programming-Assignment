Question 4;
#include <stdio.h>

void addarrays( int a[10],int b[10]);
int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={1,2,3,4,5,6,7,8,9,10};



  addarrays(a,b);
    return 0;
}
void addarrays( int a[10],int b[10]){

int c[10];

int i;
for(i=0;i<10;i++){

c[i]=b[i]+a[i];
printf("The sum of b[%d] and a[%d] is %d\n",i,i,c[i]);
int *ptr;
ptr=&c[i];
printf("The address is %x\n",ptr);

}
    printf("\nThe Three arrays are:\n\n");
    
    printf("The first array is");
   for(i=0;i<10;i++){
    printf("%d,",a[i]);}
    
    printf("\nThe second array is ");
    for(i=0;i<10;i++){
    printf("%d, ",b[i]);}
    
    printf("\nThe array of the sums is");
    for(i=0;i<10;i++){
    printf("%d, ",c[i]);}
 

return 0;
}
