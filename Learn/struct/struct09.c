/**
 * 结构体指针的使用
 */
#include <stdio.h>

struct point {
    int x;
    int y;
};

void getStruct(struct point *p);

int main(int argc, char const *argv[])
{
    struct point p = {0, 0};
    getStruct(&p);
    printf("%d, %d\n", p.x, p.y);
    return 0;
}

void getStruct(struct point *p)
{
    scanf("%d", &p->x);
    scanf("%d", &p->y);
}
