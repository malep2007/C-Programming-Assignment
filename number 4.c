Question 4;
#include <stdio.h>

void addarrays( int j[10],int k[10]);
int main()
{

    int j[5]={6,7,8,9,10};
    int k[5]={1,2,3,4,5};



  addarrays(j,k);
    return 0;
}
void addarrays( int j[5],int k[5]){

int l[5];

int i;
for(i=0;i<10;i++){

l[i]=k[i]+j[i];
printf("The sum of the arrays is %d\n",l[i]);
int *ptr;
ptr=&l[i];
printf("The address is %x\n",ptr);

}
    printf("\nThe arrays are:\n\n");
    
    printf("The first array is");
   for(i=0;i<10;i++){
    printf("%d,",j[i]);} 
    printf("\nThe second array is ");
    for(i=0;i<10;i++){
    printf("%d, ",k[i]);}
    printf("\nThe third array is");
    for(i=0;i<10;i++){
    printf("%d, ",l[i]);}
 

return 0;
}
