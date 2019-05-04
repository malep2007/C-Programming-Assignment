#include<stdio.h>

int *addarrays(int firstArray[],int secondArray[],int SIZE);
main(){
int firstArray[]={10, 9, 8, 7, 6, 5};
int secondArray[]={2, 4, ,6 ,8, 10, 12};

int *thirdArray=addarrays(firstArray,secondArray,6);
for (int i=0;i<6;i++){
printf("%d\n",thirdArray[i]);
}
}
int *addarrays(int firstArray[],int secondArray[],int SIZE){
int *thirdArray=malloc(SIZE*sizeof(int));
for(int i=0; i<SIZE ;i++){
thirdArray[i]= firstArray[i]+secondArray[i];
}
return thridArray;
}
