#include <stdio.h>

int search(int x, int a[], int length);

int main(int argc, char const *argv[])
{
    int a[] = {2, 4, 6, 7, 1, 3, 5, 9, 11, 13, 23, 14, 32};
    int x, loc;

    printf("请输入一个数字: " );
    scanf("%d", &x);

    loc = search(x, a, sizeof(a) / sizeof(a[0]));

    if (loc != -1) {
        printf("%d的下表为: %d\n", x, loc);
    } else {
        printf("%d不在数组中\n", x);
    }
    return 0;
}

int search(int x, int a[], int length)
{
    int i;
    for ( i = 0; i < length; i++) {
        if (a[i] == x) {
            return i;
        }
    }

    return -1;
}
