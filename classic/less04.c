#include <stdio.h>

int main()
{
    int num, i;
    for (i = 0;i < 10; i++) {
        /*
        if (100 * i + 10 * i + i + 10 * i + i + 3 * i == 500) {
            num = i;
            printf("num is %d.\n", num);
        } 
        */

        if (i < 10) {
            num = i;
            printf("num is %d.\n", num);
        }
    }
    return 0;
}
