#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void addarrays(int array1[5],int array2[5]);
int main()
{
    int m;
    int arrayA[5] = {1,2,3,4,5};
    int arrayB[5] = {2,2,2,2,2};
    printf("first array\n");
    for(m=0;m<5;m++){
        printf(" %d\t",arrayA[m]);
    }
     printf("\nsecond array\n");
     for(m=0;m<5;m++){
        printf(" %d\t",arrayB[m]);
    }

     addarrays(arrayA,arrayB);

     return 0;
}

void addarrays(int arrayone[5],int arraytwo[5]){
        int i;
        int sum[5];
        printf("\nTotal arrays\n");
        for(i=0;i<5;i++){
        sum[i] = arrayone[i] + arraytwo[i];
        printf(" %d\t",sum[i]);
        }
        return;
}
