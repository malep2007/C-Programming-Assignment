
//AMPURIRA ANTONY  17/U/2717/PS
#include <stdio.h>
void print_msg( void );
main(){
  print_msg("This is a message to print");//The print_msg function never takes arguments.
  return 0;
}
void print_msq( void )  //Supposed to be print_msg instead of print_msq
{
  puts("This is a message to print");
  return 0; //There is  unexpected because the return type was specified as 'void'
}
