#include<stdio.h>
main ()
{ 
   int x = 1;
   If (x==1)
{
  printf (“x equals 1”);
}
   else {
   printf (“x does not equal 1”);
}
  return 0;
}
/*The initial code had the following bugs. The if statement had a single equal sign so I changed 
it to a double equal sign(==) since thats what denotes equals.
The semi colon on the if statement parentheses caused a termination. I removed it since an if statement doesnt terminat.
The if statement only works with the word else not otherwise.*/
