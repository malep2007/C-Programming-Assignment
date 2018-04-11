#include <stdio.h>
#include <stdlib.h>
void addarrays(int arrayone[10],int arraytwo[10]);
int main()
{
    int aone[10]={0,1,2,3,40,5,6,7,8,9};
    int atwo[10]={9,1,3,6,9,0,3,7,1,91};
    addarrays(aone,atwo);
    return 0;
}
void addarrays(int arrayone[10],int arraytwo[10]){
    int arraythree[10];
    int i,n,w;
    int *pointer;

    printf("first array is [");
    for(i=0;i<10;i++){
        printf("%d, ",arrayone[i]);
    }
    printf("]\n");

    printf("second array is [");
    for(i=0;i<10;i++){
        printf("%d, ",arraytwo[i]);
    }
    printf("]\n");

    printf("third array is [");

    for(i=0;i<10;i++){
        n=arrayone[i];
        w=arraytwo[i];
        arraythree[i]=n+w;
        printf("%d, ",arraythree[i]);
    }
    pointer=arraythree;
    printf("]\nThe pointer to the third array is %u",pointer);
}

