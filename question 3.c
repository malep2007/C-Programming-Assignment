Declaration for an array that will hold 50
    long[50];

Statement that assigns the value of 123.456
    long[49]= 123.456

What are the values of x
for(x = 0; x<100; x++)//The values of x are a range of 0-99

What is the value of ctr
for(ctr=2; ctr<10; ctr+=3)//The values of ctr are 2,5,8

While statement to count from 1 to 100 by 3s

#include<stdio>
#include<stdio.h>
main()
{
    int count=1;

    while(count<=100)
    {
        printf("%d",count);
        count+=3;
    }
}

What is wrong with the code fragment
for (counter = 1; counter <MAXVALUES; counter++ );//The termination; is not supposed to be included on this statement but rather after the printf statement.
   printf("\nCounter = %d", counter);//The opening and closing races{} are missing




