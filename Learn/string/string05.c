#include <stdio.h>
#include <string.h>

struct xiao{
    char name[10];
    int age;
};


int main()
{
    struct xiao xiaosha;
    strcpy(xiaosha.name, "xiaosha");
    printf("%s\n", xiaosha.name);

    return 0;
}
