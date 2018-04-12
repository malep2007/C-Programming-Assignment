/* solution to question four*/
void addarrays(int array1[], int array2[],int destination_array[],int size)
{
	
	for(int i=0;i<size;i++){
		destination_array[i]=array1[i]+array2[i];
		
	}
}

/* modification of the program*/
# include<stdio.h>
int*addarrays(int array1[], int array2[],int size);
int main()
{
	
	int array1[]={1,5,3,22,6};
	int array2[]={13,143,11,10,121};
	int*array3=addarrays(array1,array2,5);
	for(int i=0;i<5;i++){
		printf("%d",array3[i])
	}
}
int*addarrays(int array1[],int array2[],int len)
{
	int*destination_array=malloc(len*sizeof(int));
	for(inti=0;i<len;i++){
		destination_array[i]=array1[i]+array2[i];
	}
	return destination_array;
}
