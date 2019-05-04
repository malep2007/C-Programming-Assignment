#include <stdio.h>
int i;
int *addarrays( int value1[],int value2[],int SIZE);

main()
{
    int value1[]={21,45,87,56,45};
    int value2[]={43,65,77,41,21};

    int *total_values=addarrays(elements1,elements2,5);
    for( i=0;i<5;i++){
        printf("%d\n",total_values[i]);
    }
}

int *total_values(int value1[],int value2[],int length){
int *total_values=malloc(length*sizeof(int));
   for( i=0;i<length;i++){
    total_values[i]=value1[i]+value2[i];
   }
   return total_values;
}
