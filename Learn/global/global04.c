/**
 * 不用用全局变量来传递函数参数
 */
#include <stdio.h>

int * f();
void g();

int main(int argc, char const *argv[])
{
    int *p = f();
    printf("*p = %d\n", *p);
    g();
    printf("*p = %d\n", *p);

    return 0;
}

int * f()
{
    static int i = 12;
    return &i;
}

void g()
{
    int k = 24;
    printf("k = %d\n", k);
}
