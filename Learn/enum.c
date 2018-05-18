#include <stdio.h>


enum colors {red, yellow, green};
void f(enum colors c);

int main(int argc, char const *argv[])
{
    enum colors t = red;

    f(t);

    return 0;
}

void f(enum colors c)
{

    printf("%d\n", c);
}
