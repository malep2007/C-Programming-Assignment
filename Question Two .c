#include <stdio.h>
void print_msg( void );
main(){
print_msg("this is a message to print");
//the print_msg() function is not supposed to take any arguments but it is being called with a string argument
return 0;
}
void print_msq( void ) //the variable name is wrong,it is supposed to be print_msg instead of print_msq
{
    puts("This is a message to print");
    return 0;//the return 0 statement is not supposed to be there as nothing is meant to be returned
}
