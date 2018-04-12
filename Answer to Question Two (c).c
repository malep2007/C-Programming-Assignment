/*........a program with some problems.........*/

#include <stdio.h>
void print_msg(void);
main(){       //there's no default return type of the min function  
    print_msg("This is a message to print");    //unnecessary arguments in the function definition
    return 0;
}
void print_msq(void)    //print_msq is not declared anywhere in this program, i.e. it's different from print_msg
{
    puts("This is a message to print");
    return 0;   //unsuitable return value, the function must return "void"
}

due to the above problems, the program above won't run correctly
