/* a header function named do_it that takes three type char arguements and returns
a type float to the calling function*/
#ifndef DO_IT_H
#define DO_IT_H

float do_it(char a, char b, char c);

#endif // DO_IT_H



/*a header for af function named print_a_number() that takes a single type int arguement
 and doesnt return anything to the calling program*/
#ifndef PRINT_A_NUMBER_H
#define PRINT_A_NUMBER_H

void print_a_number(int x);

#endif // PRINT_A_NUMBER_H




/* A code with a problem*/

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
/* Problem with the code*/
// The print_msg() function wasnt supposed to take any arguements but the main arguement calls it with a string arguement//





