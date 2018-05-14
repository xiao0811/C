/**
 * 数字出现的次数, 使用数组
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int number = 10;
    int x, i;
    
    /*
    int count[number];
    for ( i = 0; i < number; i++) {
        count[i] = 0
    }
    * 等价于👇的初始化数组
    */

    int count[number] = {0};


    scanf("%d", &x);
    while (x != -1) {
        if (x >= 0 && x < 10) {
            count[x]++;
        }
        scanf("%d", &x);
    }

    for ( i = 0; i < number; i++) {
        printf("%d 一共出现: %d次\n", i, count[i]);
    }
    return 0;
}
