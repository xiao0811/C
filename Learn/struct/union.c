/**
 * union 的实例所有成员都相同
 */
#include <stdio.h>

typedef union {
    int i;
    char ch[sizeof(int)];
} CHI;

typedef union {
    int x;
    int y;
} point;

int main(int argc, char const *argv[])
{
    CHI chi;
    CHI xiao;
    int i;
    chi.i = 1234;
    xiao.i = 3456;
    

    for (i = 0; i < sizeof(int); i++) {
        printf("%02hhx", chi.ch[i]);
    }

    printf("\n");
    printf("%ld\n", sizeof(int));
    for (i = 0;i < sizeof(int); i++) {
        printf("%02hhx\n", xiao.ch[i]);
    }

    printf("------------------------------\n");
    point p1;
    p1.x = 10;
    printf("%d\n", p1.y);
    return 0;
}
