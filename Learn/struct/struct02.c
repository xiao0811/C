/**
 * 结构体的初始化赋值
 */
#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int main(int argc, char const *argv[]) {
    struct date today = {2018, 05, 20};
    struct date thismonth = {.month = 8, .year = 1990};

    printf("Today's date is %d-%i-%d.\n", today.year, today.month, today.day);
    printf("This moth is %d-%i.\n", thismonth.year, thismonth.month);
    
    printf("thismonth's day is %d", thismonth.day);     // thismonth 没有赋值,呗初始化为0
    return 0;
}
