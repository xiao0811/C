/**
 * static 静态本地变量
 * 静态本地变量实际上是全局变量
 */
#include <stdio.h>

int f(void);

int main(int argc, char const *argv[])
{
    f();
    f();
    f();
    return 0;
}

int f(void)
{
    int xiao = 1;
    static int sha = 2;
    printf("xiao = %d ", xiao);
    printf("sha = %d\n", sha);
    xiao++; sha++;
    printf("xiao = %d ", xiao);
    printf("sha = %d\n", sha);
    printf("-------------------\n");
}
