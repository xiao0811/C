#include <stdio.h>

int main()
{
    int month;
    char month_name[12][10] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "july",
        "Augusts",
        "September",
        "October",
        "November",
        "December",
    }; 
    
    printf("输入月份: ");
    scanf("%d", &month);
    
    if (month < 1 || month > 12) {
        printf("别闹, 输入正确的月份.\n");
    } else {
        printf("%s\n", month_name[month - 1]);
    }

    return 0;
}
