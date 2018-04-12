/*

*/

#include <stdio.h>

int *addArrays(int myArray1[], int myArray2[], int arraySize);

main(){
	int myArray1[]={1,2,3,4,5,6,7,8,9,10};
	int myArray2[]={11,12,13,14,15,16,17,18,19,20};

	int *myArrayResult=addArrays(myArray1, myArray2,10);
	int i=1;
	while(u<10){
		printf("%s\n",myArrayResult[i]);
		i=i+1;
	}
}

int *addArrays(int myArray1[], int myArray2[], int arraySize){
	int *destinationArray=malloc(arraySize*sizeof(int));

	int i=1;
	while(i<arraySize){
		destinationArray[i]=myArray1[i]+myArray2[i];
		i=i+1;
	}

	return destinationArray;
}