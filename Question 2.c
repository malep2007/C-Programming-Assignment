HEADER FOR FUNCTION do_it()

#ifndef do_it.h
#define do_it.h
  float do_it(char x, char y, char z);
#endif // do_it

HEADER FOR A FUNCTION print_a_number()

#ifndef print_a_number.h
#define print_a_number.h
    print_a_number(int a);

#endif // print_a_number

What is wrong with this program?

#include<stdio.h>
void printf_msg(void);
main(){
    printf_msg("This is a message to print");//This function is not supposed to take on any arguments as it was declared to be void.
    return 0;
}
void printf_msq(void)//printf_msq instead of printf_msq
{
    puts("This is a message to print");
    return 0;
}
