//this answer to first part of question 2

float do_it(char a,char b,char c);

//this is the answer to the second part of question 2

void print_a_number(int m);

//this the answer to the third part of question 3

 #include <stdio.h>
void print_msg( void );
main()
{
   print_msg("This is a message to print");/*The print_msg function does not take arguments arguments.*/
   return 0;
}
   void print_msq( void ) /*This is supposed to be print_msg not print_msq*/
{
   puts("This is a message to print");
   return 0; /*This is unexpected because the return type was specified as 'void'*/
}/*the code above had many arguments to function 'print_msg'*/


