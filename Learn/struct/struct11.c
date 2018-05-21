/**
 * 结构嵌套
 */
#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point pt1;
    struct point pt2;
};

int main(int argc, char const *argv[])
{
    struct rectangle r;
    r.pt1.x = 1;
    r.pt1.y = 0;

    return 0;
}
