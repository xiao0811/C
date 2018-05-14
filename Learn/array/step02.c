/**
 * 求输入数字大于平均数的数
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, i;
    int cnt = 0;
    double sum;

    int number[30];

    scanf("%d", &x);

    while ( x != -1) {
        number[cnt] = x;
        cnt++;
        sum += x;
        scanf("%d", &x);
    }

    printf("平均数为:%.2f\n", sum / cnt);

    for ( i = 0; i < cnt; i++) {
        if (number[i] > sum / cnt) {
            printf("%d\n", number[i]);
        }
    }
    return 0;
}
