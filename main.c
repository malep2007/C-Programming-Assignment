#include <ctype.h>
#include <stdio.h>

main(){
    char some_string[] = {};
    for (int i = 0; i < 20; ++i) {
        scanf("%s", some_string);
        if (some_string[i] == EOF)
        {
            break;
        }
    }
    putchar(some_string);

}