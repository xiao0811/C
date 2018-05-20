/**
 * 结构体取指针, 必须要加&
 */
#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};


int main(int argc, char const *argv[])
{
    struct date today;
    today =(struct date){2018, 05, 20};
    
    struct date *pDate = &today;
    printf("today pointer is: %p.\n", pDate);
    return 0;
}
