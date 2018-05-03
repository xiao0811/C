#include <stdio.h>
/**
 * 当fahr=0, 20, 40 ..., 300时, 分别
 * 打印华氏温度与摄氏温度对照表
 */
int main(int argc, char const *argv[]) {
    int fahr, celsius;      // 华氏和摄氏
    int lower, upper, step;

    lower = 0;          // 温度表的下限
    upper = 300;        // 温度表的上限
    step = 20;          // 步长

    fahr = lower;
    printf("%s\t%s\n", "fahr", "celsius");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}
