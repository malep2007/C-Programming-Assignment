#include <stdio.h>


int *addarrays(int arrayOne[], int arrayTwo[], int size);

main(){
    int arrayOne[] = {1,2,3,4,5};
    int arrayTwo[] = {6,7,8,9,10};

    int *arrayThree = addarrays(arrayOne, arrayTwo, 5);
    for(int i=0;i<5;i++) {
        printf("%d \n", arrayThree[i]);
    }
}


int *addarrays(int arrayOne[], int arrayTwo[], int size){
    int *arrayThree= malloc(size * sizeof(int));
    
    for(int i=0;i<size;i++){
        arrayThree[i] = arrayOne[i] + arrayTwo[i];
    }
    return Three;
}
