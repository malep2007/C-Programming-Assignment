//NAME: NUWAGABA RAYMOND/
//REG No: 17/U/9292/

#include <stdio.h>
void print_msg( void );
main(){
  print_msg("This is a message to print");//There are no arguments in the print_msg./
  return 0;
}
void print_msq( void )  //Supposed to be print_msg instead of print_msq/
{
  puts("This is a message to print");
  return 0; // Unexpected because the return type was specified as 'void'/
}
