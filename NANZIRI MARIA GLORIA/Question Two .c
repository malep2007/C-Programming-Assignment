#include <stdio.h>
void print_msg( void );
main(){
print_msg("this is a message to print");//what is in the carry brackets is not supposed to be there as it does not take in anything
return 0;
}
void print_msq( void ) //it is supposed to be print_msg instead of print_msq.(wrong variable name)
{
    puts("This is a message to print");
    return 0;//since nothing is meant to be returned, so the return 0 statement is not supposed to be there.
}
