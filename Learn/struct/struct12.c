/**
 * 结构中的结构数组
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

void printRect(struct rectangle r)
{
    printf("<%d, %d> to <%d, %d>\n", r.pt1.x, r.pt1.y, r.pt2.x, r.pt2.y);
}

int main(int argc, char const *argv[])
{
    int i;
    struct rectangle rects[] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };

    for (i = 0; i < 2; i++) {
        printRect(rects[i]);
    }
    return 0;
}
