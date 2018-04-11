#include<stdio.h>
void print_msg(void);/*not supposed to have any arguments*/
main()
{
 print_msg("This is a message to print");/*function is called with an argument*/
}
viod print_msg(void)
{
puts ("This is a message to print");
return 0;
}
/*The  print_msg() function is not supposed to take any arguments but the main function calls it with a string argument*/
