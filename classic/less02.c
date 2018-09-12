#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    long f1, f2, total;
    int i;
    int months = atoi(argv[1]);
    f1 = f2 = 1;
    for (i = 1; i <= months; i++) {
        if (i > 2) {
            total = f1 + f2;
            f1 = f2;
            f2 = total;
            printf("month %d: %ld\n", i, total);
        } else {
            printf("month %d: 1\n", i);
        }
    }
    return 0;
}
