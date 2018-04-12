#include<stdio.h>
void print_msg(void);
main(){
print_msg ();
/*  the print_msg defined under the main was supposed to have no argument in order to correspond with the void print_msg */
//return 0;
}
void print_msg( void)
{
puts("This is a message to print");
return 0;
}
