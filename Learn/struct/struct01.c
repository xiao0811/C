#include <stdio.h>

/**
 * struct 一般申明在函数外
 */
struct date {
    int month;
    int day;
    int year;
};

int main(int argc, char const *argv[])
{
    struct date today;

    today.month = 05;
    today.day = 20;
    today.year = 2018;

    printf("Today's date is %d-%d-%d. \n", today.year, today.month, today.day);
    return 0;
}
