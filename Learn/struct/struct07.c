/**
 * 结构体作为返回值使用
 * K & R 中建议使用结构体的时候直接传入指针
 */
#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point getStruct();
void output(struct point p);

int main(int argc, char const *argv[])
{
    struct point p = getStruct();
    printf("%d, %d\n", p.x, p.y);
    output(p);
    return 0;
}

struct point getStruct()
{
    struct point p;
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    return p;
}

void output(struct point p)
{
    printf("%d, %d\n", p.x, p.y);
}
