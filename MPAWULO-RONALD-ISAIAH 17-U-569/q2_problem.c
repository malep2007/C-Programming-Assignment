// MPAWULO RONALD ISAIAH BSc TELECOMMUNICATIONS ENGINEERING 17/U/569
#include <stdio.h>
void print_msg( void );
main(){
  print_msg("This is a message to print");//The print_msg function does not take arguments arguments.
  return 0;
}
void print_msq( void )  //This is supposed to be print_msg not print_msq
{
  puts("This is a message to print");
  return 0; // This is unexpected because the return type was specified as 'void'
}
