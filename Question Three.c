//a
//declaration for an array that will hold 50 type long values
//long values[50];


//b
//statement that assigns the value 123,456 to the 50th element in the array from the above equation
//long values[49] = 123456;

//c
//value of x when the following statement is complete
//  for (x = 0; x < 100; x++)
//x is equal to 100 when the statement is complete

//d
//value of ctr when the following statement is complete
//   for(ctr = 2; ctr < 10; ctr += 3)
//The value of ctr is 11 when the statement is complete


//e
//while statement to count from 1 to 100 by 3s

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 1;

    while(count <= 100){
        printf("%d ", count);
        count += 3;
}
}

//What is wrong with the following code fragment (MAXVALUES is not the problem !)
/* for (counter = 1; counter < MAXVALUES; counter++ );
    printf("\nCounter = %d", counter);*/
//The code under the for loop is always executed once, outside of the for loop, because of the semicolon terminating the for loop.
