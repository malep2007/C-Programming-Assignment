#include <stdio.h>
void print_msg( void );
main(){
  print_msg("This is a message to print");//The print_msg function doesn't take any arguments. It should have nothing between braces.
  return 0;
}
void print_msq( void )  //Supposed to be print_msg instead of print_msq (wrong variable name)
{
  puts("This is a message to print");
  return 0; // This is not supposed to be there because the return type was specified as 'void'
}
