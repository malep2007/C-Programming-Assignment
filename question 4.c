
Question 4

part1

void addarrays(int array1[],int array2[],int destination_array[],int SIZE)
{
    for (int i=0;i<SIZE;i++)
    {
        destination_array[i]=array1[i]+array2[i];
    }

}





part2

#include<stdio.h>

int*addarray(int array1[],int array2[],int SIZE);
main()
{
    int array1[]={2,5,3,22,6};
    int array2[]={13,143,11,10,121};

    int*array3= addarrays(array1,array2,5);
    for(int i=0;<5;i++
    {
        printf("%d\n",array3[i]);

    }

}





part3

#include<stdio.h>

int*addarrays(int array1[],int array2[],int SIZE);
main()
{
  int*addarrays(int array1[],int array2[],int length)
  {
    int*destination_array=malloc(length*sizeof(int));
    for(i=0;<length;i++){
        destination_array[i]=array1[i]+array2[i];
      }
      return destination_array
  }
  }
