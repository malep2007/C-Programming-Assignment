#include <stdio.h>
int i;
int *addarrays( int elements1[],int elements2[],int SIZE);

main()
{
    int elements1[]={21,45,87,56,45};
    int elements2[]={43,65,77,41,21};

    int *total_elements=addarrays(elements1,elements2,5);
    for( i=0;i<5;i++){
        printf("%d\n",total_elements[i]);
    }
}

int *total_elements(int elements1[],int elements2[],int length){
int *total_elements=malloc(length*sizeof(int));
   for( i=0;i<length;i++){
    total_elements[i]=elements1[i]+elements2[i];
   }
   return total_elements;
}
