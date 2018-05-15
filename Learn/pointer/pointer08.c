#include <stdio.h>

void minmax(int a[], int length, int b[]);

int main()
{
    int a[] = {2, 4, 6, 7, 1, 3, 5, 9, 11, 13, 23, 14, 32, 98};
    int b[2];
    minmax(a, sizeof(a) / sizeof(a[1]), b);
    printf("min = %d, max = %d\n", b[0], b[1]);
    return 0;
}

void minmax(int a[], int length, int b[])
{
    int i;
    b[0] = b[1] = a[0];
    for (i = 1; i < length; i++) {
        if (a[i] > b[1]) {
            b[1] = a[i];
        } else if (a[i] < b[0]) {
            b[0] = a[i];
        }
    }
}
