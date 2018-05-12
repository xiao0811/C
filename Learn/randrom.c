/*
 * 生成一个随机数, 猜吧
 * author: 骁傻
 * date: 2018-05-12
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 生成一个随机数
 */
int Random(int start, int end)
{
    int dis = end - start;
    return rand() % dis + start;
}

int main()
{
    int i, min, max, num, isEnd, guess;
    isEnd = 0;
    printf("请输入一个随机数区间\n");
    scanf("%d %d", &min, &max);

    srand((unsigned)time(NULL));
    num = Random(min, max);
    // printf("随机数已生成: %d\n", num);

    while (!isEnd) {
        printf("请输入你猜的数字:");
        scanf("%d", &guess);
        if (guess < num) {
            printf("小了\n");
        } else if (guess > num) {
            printf("大了\n");
        } else {
            isEnd = 1;
        }
    }

    printf("恭喜,正确答案为: %d\n", num);
    return 0;
}
