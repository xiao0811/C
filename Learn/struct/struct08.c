/**
 * 使用指针访问struct中的成员变量 ->
 */
#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int main(int argc, char const * argv[])
{
    struct date today = {5, 20, 2018};
    struct date * ptoday = &today;
    ptoday->day = 21;
    printf("%d-%d-%d\n", today.year, today.month, today.day);
    return 0;
}
