#include<stdio.h>
main(){
    int counter;
    int MAXVALUES=10;
    /*
    The semicolon after the forloop makes it run without doing anything
    The correction is shown below
    */
    for(counter=1;counter<MAXVALUES;counter++)
        printf("\nCounter=%d",counter);
    return 0;
}
