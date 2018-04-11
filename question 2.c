#include <stdio.h>
void print_msg( void );// there is no function definition for this function
main() //main function has no return type yet it returns an integer
{ 
    print_msg("This is a message to print");//print message takes in no argument
    return 0;
}
void print_msq( void )
{
    puts("This is a message to print");
    return 0;//the void function returns nothing yet 0 is being returned
}