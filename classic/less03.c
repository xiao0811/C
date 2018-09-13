#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num_min, num_max, i, j, num;
    num_min = atoi(argv[1]);
    num_max = atoi(argv[2]);
    for (i = num_min; i <= num_max; i++) {
        num = i;
        for (j = 2; j < num; j++) {
            if (num % j != 0) {
                printf("%d\n", num);
                break;
            }
        }
    }
    return 0;
}
