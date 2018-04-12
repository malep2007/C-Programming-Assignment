#include <stdio.h>
int i;
int *addarrays( int values1[],int values2[],int SIZE);

main()
{
    int values1[]={21,45,87,56,45};
    int values2[]={43,65,77,41,21};

    int *total_values=addarrays(values1,values2,5);
    for( i=0;i<5;i++){
        printf("%d\n",total_values[i]);
    }
}

int *total_values(int values1[],int values2[],int length){
int *total_values=malloc(length*sizeof(int));
   for( i=0;i<length;i++){
    total_values[i]=values1[i]+values2[i];
   }
   return total_values;
}
