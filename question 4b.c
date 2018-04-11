 #include <stdio.h>
int *addarrays(int arraya[],int arrayb[], int SIZE);
main(){
int arraya[] = {2,3,5,9,10};
printf("arraya[2,3,5,9,10]\n");
int arrayb[] = {10,23,25,17,16};
 printf("arrayb[10,23,25,17,16]\n");
 printf("arrayc  ");
int *arrayc = addarrays(arraya, arrayb, 5);
int i;
for( i=0;i<5;i++) {
printf("%d,", arrayc[i]);
}
}

int *addarrays(int arraya[], int arrayb[], int length){
int *destination_array = malloc(length * sizeof(int));
int i;
for( i=0;i<length;i++){
destination_array[i] = arraya[i] + arrayb[i];
}
return destination_array;
}
