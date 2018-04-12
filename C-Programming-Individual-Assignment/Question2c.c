/*
What's wrong with the following program
ANSWER
The function print_msg() is not supposed to take
any arguments but the main function calls it with
a string argument.
*/

#include <stdio.h>
void print_msg(void);
main(){
	print_msg("This is a message to print");
	return 0;
}
void print_msg(void){
	puts("This is a message to print");
	return 0;
}
