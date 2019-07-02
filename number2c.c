     /*what is wrong with the program*/
  #include <stdio.h>
                    void print_msg( void );
                    main(){
                        print_msg("This is a message to print");// the function must not have any arguments
                        return 0;
                    }
                    void print_msq( void )// used wrong function name "print_msq" instead of "print_msg"
                    {
                        puts("This is a message to print");
                        return 0;// this is not supposed to be there since it is a void function
                    }
