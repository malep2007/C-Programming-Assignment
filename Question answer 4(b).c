#include <stdio.h>

int *addarrays( int numbers1[],int numbers2[],int SIZE);

main()
{
    int numbers1[]={21,45,90,76,67};
    int numberss2[]={12,67,78,89,67};

    int *total_numbers=addarrays(numbers1,numbers2,5);
    for(int i=0;i<5;i++){
        printf("%d\n",total_numbers[i]);
    }
}

int *total_numbers(int numbers1[],int numberss2[],int length){
int *total_elements=malloc(length*sizeof(int));
   for( int i=0;i<length;i++){
    total_numbers[i]=numbers1[i]+numbers2[i];
   }
   return total_numbers;
}
