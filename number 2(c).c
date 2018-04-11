#include <stdio.h>//fix the bug
void print_msg(void);

int main()
{
  print_msg("This is a message to print");// print_msg is supposed to have  nothing as a parameter
  return 0;//Return zero is not suppossed to be in the middle of the code,it suppossed to be at the end.
}

void print_msq(void)//this is suppossed to be printf_msg,not print_msq
{
    puts("This is a message to prnt");
    return 0;//Return zero is not suppossed to be in the middle of the code,it suppossed to be at the end.
}
