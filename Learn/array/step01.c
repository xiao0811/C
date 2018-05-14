/**
 * step01 求输入数字的平均数
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    double sum = 0;
    int cnt = 0;
    scanf("%d", &x);

    while (x != -1) {
        sum += x;
        cnt++;
        scanf("%d", &x);
    }

    if (cnt > 0) {
        printf("%f\n", sum / cnt);
    }
    return 0;
}
