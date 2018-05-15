#include <stdio.h>

void f(int ab[]);
int main()
{
    int a, b;
    int ab[2];

    a = 10;
    b = 20;
    ab[0] = a;
    ab[1] = b;
    printf("ab[0] = %d ab[1] = %d\n", ab[0], ab[1]);
    f(ab);
    printf("ab[0] = %d ab[1] = %d\n", ab[0], ab[1]);
    return 0;
}

void f(int ab[])
{
    //printf("ab[0] = %d ab[1] = %d\n", ab[0], ab[1]);
    ab[0] = 20;
    ab[1] = 10;
}
