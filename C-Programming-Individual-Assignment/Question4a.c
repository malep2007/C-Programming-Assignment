/*
Function that accepts two arrays of same size
and adds them together. The result is then
stored in third array
*/

#include <stdio.h>

void addArrays(int myArray1[], int myArray2[], int myArrayResult[], int arraySize);

main(){
	//Main function
}

void addArrays(int myArray1[], int myArray2[], int myArrayResult[], int arraySize){
	int i=0;
	while(i<arraySize){
		myArrayResult[i]=myArray1[i]+myArray2[i];
		i=i+1;
	}
}