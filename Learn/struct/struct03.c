#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int main(int argc, char const *argv[]) 
{
    struct date today;
    today = (struct date){2018, 05, 20};

    struct date day;
    day = today;

    printf("today: %d-%d-%d.\n", today.year, today.month, today.day);
    printf("  day: %d-%d-%d.\n", day.year, day.month, day.day);
    return 0;
}
