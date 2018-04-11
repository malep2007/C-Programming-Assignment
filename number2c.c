#include <stdio.h>
void print_msg( void );
main(){
  print_msg("This is a message to print");//function takes no arguments.
  return 0;
}
void print_msq( void )  //function should be print_msg instead of print_msq
{
  puts("This is a message to print");
  return 0; // isnt necessary because return type was specified as 'void'
}
