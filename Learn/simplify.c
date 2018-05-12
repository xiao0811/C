/*
 * 分子式约分(妈的智障!!!!)
 * author: 骁傻
 * date: 2018-05-12
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dividend, divisor;
    int a, b, t;

    printf("请输入一个分数(不能有空格): ");
    scanf("%d/%d", &dividend, &divisor);

    a = dividend;
    b = divisor;
    while (b > 0) {
        t = a % b;
        a = b;
        b = t;
    }
    // printf("a = %d, b = %d\n", a, b);
    printf("约分后为:%d/%d\n", dividend / a, divisor / a);
    return 0;
}
