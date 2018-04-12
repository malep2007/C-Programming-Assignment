//Question 2a
float do_it(char a,char b,char c);


//Question 2b
void print_a_number(int m);

//Question 2c

#include <stdio.h>
void print_msg( void );
main(){
  print_msg("This is a message to print");//The print_msg function does not take arguments on it.
  return 0;
}
void print_msq( void )  //This is supposed to be print_msg not print_msq
{
  puts("This is a message to print");
  return 0; // This is unexpected because the return type was already specified as 'void'
}
