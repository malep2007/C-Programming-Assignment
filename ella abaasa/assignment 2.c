#include <stdio.h>
void print_msg(void);
main(){
print_msg("This is a message to print");
return 0;
}
void print_msq(void){//This was supposed to be print_msg not print_msq
puts("This is a message to print");
return 0;//This is wrong
  }
