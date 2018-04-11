/*Errors in the program*/

#include <stdio.h>
void print_msg( void );
main(){
    print_msg("This is a message to print");//the function print_msg is not supposed to return any arguments.
    return 0;
}
    void print_msq( void )//wrong spelling of function i.e "print_msq" instead of "print_msg" hence first use within program
{
    puts("This is a message to print");
    return 0;//function is void and hence should not return anything.
}

//Kayondo Muhsin Musa 17/U/383
