#include <stdio.h>
int x=1;//the colon was removed

main()
{
    if(x=1)//the semicolon was removed
    printf(" x equals 1");
    else//otherwise was replaced by else
    printf("x does not equal to 1");
    return 0;
}
