#include <stdio.h>
#include <stdlib.h>

//QUESTION 2 PART ONE


#include <stdio.h>
#include <stdlib.h>

float do_it(char a, char b, char c); /*takes three type char arguments and returns a float*/

void print_a_number(int); /*takes an int and returns nothing*/


//question 2 part 2

  #include <stdio.h>
                    void print_msg( void );
                    main(){
                        print_msg("This is a message to print");
                        return 0;
                    }
                    void print_msq( void )
                    {
                        puts("This is a message to print");
                        return 0;
                    }


/*ANSWER:
The problem with this program is that the function print_msg() is declared not to take any arguments and to return no value
but it was used to take a string. This leads to an error.
The return type of function 'main' was not specified.
The function print_msq() is declared not to take in any arguments and to return nothing but it was written to return 0
which is an int. This leads to an error.*/

