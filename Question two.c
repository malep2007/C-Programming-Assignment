#include <stdio.h>
#include <stdlib.h>
//a
#ifndef DO_IT_H /* Include guard */
#define DO_IT_H

float do_it(char x, char y, char z);

#endif // DO_IT_H

//b
#ifndef PRINT_A_NUMBER_H    /* Include guard */
#define PRINT_A_NUMBER_H

void print_a_number(int a);

#endif // PRINT_A_NUMBER_H

//c
//What's wrong with the following program ?
 /*#include <stdio.h>
                    void print_msg( void );
                    main(){
                        print_msg("This is a message to print");
                        return 0;
                    }
                    void print_msq( void )
                    {
                        puts("This is a message to print");
                        return 0;
                    } */

//The print_msg() function is not supposed to take any arguments but the main function calls it with a string argument.
