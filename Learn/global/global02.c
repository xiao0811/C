/**
 * 全局变量
 * in main gAll = 12
 * in f gAll = 1
 * agn f gAll = 3
 * agn main gAll = 12
 * 函数内部重新声明和全局变量同名变量
 * 全局变量回自动隐藏
 */
#include <stdio.h>

int f(void);

int gAll = 12;  // 全局变量

int main(int argc, char const *argv[])
{
    printf("in %s gAll = %d\n", __func__, gAll);
    f();
    printf("agn %s gAll = %d\n", __func__, gAll);
    return 0;
}

int f(void)
{
    int gAll = 1;
    printf("in %s gAll = %d\n", __func__, gAll);
    gAll += 2;
    printf("agn %s gAll = %d\n", __func__, gAll);
    return gAll;
}
