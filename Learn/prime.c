/*
 * n - m 区间所有素数的个数个总和
 * author: 骁傻
 * date: 2018-05-12
 */
#include <stdio.h>

int isPrime(int a);
int main(int argc, char const *argv[])
{
    int n, m, i;
    int count = 0;  // 个数
    int sum = 0;    // 总和

    scanf("%d %d", &n, &m);

    for (i = n; i <= m; i++) {
        if (isPrime(i)) {
            count++;
            sum += i;
        }
    }

    printf("%d 到 %d 之间一共有%d素数, 他们的总和为: %d\n", n, m, count, sum);
    return 0;
}


int isPrime(int a)
{
    int i;
    int pri = 1;
    for (i = 2; i < a - 1; i++) {
        if (a % i == 0) {
            pri = 0;
        }
    }

    return pri;
}
