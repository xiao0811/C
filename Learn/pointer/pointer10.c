#include <stdio.h>

int main()
{
    char xiao[] = "xiaosha";
    char * px = xiao;
    printf("px = %p\n", px);
    printf("px + 1 = %p\n", px + 1);

    int sha[] = {1, 2, 3};
    int * p = sha;
    printf("p = %p\n", p);
    printf("p + 1 = %p\n", p + 1);
    return 0;
}
