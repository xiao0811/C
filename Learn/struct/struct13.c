/**
 * typedef 声明新的类型名字
 * 改善程序的可读性
 */

#include <stdio.h>

typedef struct point {
    int x;
    int y;
} Point;

// 推荐这种声明 !!!
typedef struct {
    int year;
    int month;
    int day;
} date;

int main()
{
    Point p1 = {1, 2};
    Point * pp1 = &p1;
    pp1->x = 3;

    date d1 = {2018, 5, 21};
    printf("%d, %d\n", p1.x, p1.y);

    printf("%d-%d-%d\n", d1.year, d1.month, d1.day);
    return 0;
}
