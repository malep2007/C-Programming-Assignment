# Assignment
This is a simple repository you will use to finish the assignments contained in this 
README.md document.

## Instruction
You are to create separate files for each question and upload those to your repositories. 
After which you will create a pull request when you are done with your assignment. 
For more information on how to use GitHub, check out this link on 
[GitHub Flow](https://guides.github.com/introduction/flow/,"GitHub Flow").

In essence, you will fork this repository to create your own master copy of it. Do the 
assignment and create a pull request with your different files. which I will observe and
score. 

## Question One
Fix the Bug in the following code so that it runs correctly
```objectivec
                    /* a program with problems... */
                    #include <stdio.h>
                    int x= 1:
                    main()
                    {
                        if( x = 1);
                            printf(" x equals 1" );
                        otherwise
                            printf(" x does not equal 1");
                        return 0;
                    }
```

### My take
```objectivec
                    /* a program with problems... */
                    #include <stdio.h>
                    int x= 1; // this is supposed to be semi colon not full colon
                    main()
                    {
                        if( x = 1)// remove semicolon
                            printf(" x equals 1" );
                        else
                            printf(" x does not equal 1");
                        return 0;
                    }
```

## Question Two
Write a header for a function named ```do_it()``` that takes three type char 
arguments and returns a type float to the calling program.

Write a header for a function named ```print_a_number()``` that takes a single
type int argument and doesn't return anything to the calling program.

What's wrong with the following program ?
```objectivec
                    #include <stdio.h>
                    void print_msg( void );
                    main(){
                        print_msg("This is a message to print");
                        return 0;
                    }
                    void print_msq( void )
                    {
                        puts("This is a message to print");
                        return 0;
                    }
```
### My take
```objectivec
//TODO 1: Header functions have a .h file extension so you need to create that
// Declarign function as Float is key in this question

float do_it(char arg1, char arg2, char arg3);
float do_it(char arg1, char arg2, char arg3){
    //does something
}
//TODO 2: Keyword to look for is "does not return anything"

void print_a_number(int arg1);

//TODO 3: What's wrong? Does not take parameters from definition
print_msg("This is a message to print");// this not right
```

## Question Three
Write a declaration for an array that will hold 50 type long values

Show a statement that assigns the value of 123.456 to the 50th element in the array
from the above question

What is the values of x when the following statement in complete ?
```objectivec
    for (x = 0; x < 100; x++)
``` 

What is the value of ctr when the following statement is compelte ?
```objectivec 
   for(ctr = 2; ctr < 10; ctr += 3)
```

Write a while statement to count from 1 to 100 by 3s

What is wrong with the following code fragment (MAXVALUES is not the problem !)
```objectivec
    for (counter = 1; counter < MAXVALUES; counter++ );
    printf("\nCounter = %d", counter);
```
### My take
```objectivec
//TODO 1: Declaration for an array that will hold 50 type long values
    double long array[50];

    //TODO 2: Statement that assigns 123.456 to 50th element
    array[49] = 123.456;

    //TODO 3: value of x from for loop. In this question 99 and 100 are correct because it was not explicit which x to consisder
    for (int x = 0; x < 100; ++x) {
        //x == 99
    }
    //Outside loop x == 100 is correct

    //TODO 4: similar thinking applies to
    for (int ctr = 2; ctr < 10; ctr+=3) {
        //ctr == 8
    }
    //ctr == 11;

    //TODO 5: Wha is wrong; indentation without the {} is important it should be
    for (int counter = 0; counter < MAXVALUES; ++counter)
        printf("\nCounter = %d", counter);
```

## Question Four
Write a function named ```addarrays()``` that accepts two arrays that are the same size. 
The function should add each element in the arrays together and place the values in a
third array.

Modify the function you created to return a pointer to the array containing the totals.
Place this function in a program that also displays the values in all three arrays.

### My Take
```objectivec
#define SIZE 10

//TODO 1: Declare a function called add_arrays(arg1, arg2) that takes arguments of array data type
void add_array(int arr1[SIZE], int arr2[SIZE]);
main() {
    int arr1[SIZE] = {1,2,3,4,5};
    int arr2[SIZE] = {1,2,3,4,5};

    add_array(arr1, arr2);
}
//TODO 2: Define how the function will operate
void add_array(int arr1[SIZE], int arr2[SIZE]){
    //TODO 3: Declare two pointers which will access the arrays' addresses
    int *ptr1, *ptr2, sum[10];
    ptr1 = arr1; ptr2 = arr2;

    // Because our pointers now have the addresses of the arrays, we can increment the addresses and add each
    // value element of each array

    for(int i = 0; i < SIZE; i ++){
        sum[i] = *ptr1 + *ptr2;
        ptr1++; ptr2 ++;

        printf("%d, ", sum[i]);
    }
}
```
