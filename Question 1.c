#include <stdio.h>
#include <stdlib.h>
main()
{
  int x=1;//it had a full colon instead of a semi-colon
  if(x==1)// single equal sign(=)is not recognized as equal but instead double equal sigh(==)
 {
   printf("x equals 1");
 }
  else // otherwise is not recognized by the compilers so we use else
 {
  printf("x does not equal 1");
 }
  return 0;
}

