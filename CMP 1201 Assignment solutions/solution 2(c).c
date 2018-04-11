#include <stdio.h>
void print_msg( void );
    main(){
    print_msg("This is a message to print");/*the declaration indicates no argument hence there is not supposed to an argument*/
    return 0; /*return function is not necessary*/
        }
void print_msq( void ) /*wrong function name instead of print_msg*/
    {
        puts("This is a message to print");
        return 0;/*return function is not necessary*/
}
