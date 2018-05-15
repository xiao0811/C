#include <stdio.h>

void f(int *p);
int main()
{
    int i =5;
    printf("&i = %p\n", &i);
    f(&i);
    return 0;
}


void f(int *p)
{
    printf(" p = %p\n", p);
}
