/**
 * 全局变量
 * in main gAll = 12
 * in f gAll = 12
 * agn f gAll = 14
 * agn main gAll = 14
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
    printf("in %s gAll = %d\n", __func__, gAll);
    gAll += 2;
    printf("agn %s gAll = %d\n", __func__, gAll);
    return gAll;
}
