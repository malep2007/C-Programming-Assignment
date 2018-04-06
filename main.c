#include <stdio.h>

main(){
    struct coord{
        int x;
        int y;
    };
    struct rectangle{
        struct coord top_left;
        struct coord bottom_right;
    };
    struct rectangle rect_one;
//    rect_one.top_left.x = 0;
//    rect_one.top_left.y = 4;
    rect_one.top_left = {0, 4};
    rect_one.bottom_right = {6, 0};

    int length = (rect_one.bottom_right.x - rect_one.top_left.x);
    int width = (rect_one.top_left.y - rect_one.bottom_right.y);
    int ares = length * width;


}