#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[] = {-2, 11, -4, 13, -5, 2, -5, -3, 12, -9};
    int i, j;
    int len = sizeof(numbers) / sizeof(numbers[0]);
    printf("%d\n", len);
    return 0;
}
