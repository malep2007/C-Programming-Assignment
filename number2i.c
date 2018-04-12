#include <stdio.h>
#include <stdlib.h>
float do_it(char a,char b,char c)
{

    return (a+b)/c;
}

int main()
{
    float dol;

    do_it(5,6,2);//if a=5,b=6,c=2
    dol=do_it(5,6,2);
    printf("%f",dol);

    return 0;
}
