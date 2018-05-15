#include <stdio.h>

void f(int *p);

int main()
{
    int i = 5;
    printf("i = %d\n", i);
    f(&i);
    printf("i = %d\n", i);
    return 0;
}

void f(int *p)
{
    *p = 10;
}
