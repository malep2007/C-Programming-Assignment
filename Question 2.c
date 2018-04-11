float do_it(char x,char y,char z)

void print_a_number( int m)
    
    On the third line, the space between print_msg function should be empty that is: print_msg();
This is because on the function declaration they used void as in "void print_msg(void);" implyimg that print_msg function should not take on any argument.
    When defining the function, another function name was used that is "void print_msq" instead of "void print_msg". Hence the correct program would have been as follows;

#include<stdio.h>
void print_msg(void);
int main(void)
{
    print_msg();
    return 0;
}
void print_msg(void)
{
    puts("This is a message to print");
}
