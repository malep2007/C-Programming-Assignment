#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int digits[50];

    digits[49] = 123.456;

    printf("Values of X\n");
    int x;
    for (x=0; x<100; x++){
        printf(" %d\t",x);
    } /*final value of x is 99*/

    printf("\n\nValues of ctr\n");
    int ctr;
    for (ctr=2; ctr<10; ctr+=3){
        printf(" %d\t",ctr);
    } /*final value of ctr is 8*/

    printf("\n\nCounting from 1 to 100\n");
    int count=1;
    while(count<=100){
        printf(" %d\t",count);
        count +=3 ;
    }

    /* for (counter = 1; counter < MAXVALUES; counter ++);
    printf("\n Counter = %d", counter); */

    /* Problems in the above code are; MAXVALUES not declared to a specific data type,
    counter not declared an integer, curly braces not used after the 'for' condition,
    and the 'for loop' was wrongly terminated before printf statement.*/


    return 0;
}

