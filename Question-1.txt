#include <stdio.h>
int x=1;
main(){
       if(x==1){
               printf("x equals 1");
             }
        else {printf("x does not equal to 1");
               }
          return 0;
               }
    /*The initial code has three bugs. First, the if parentheses had a single equal sign yet it was supposed
    to be a double equal sign, ==.
    The semi colon after the if parentheses was not supposed to be there.The if statement is not terminated.
    The if statement goes with the word else not otherwise.*/
