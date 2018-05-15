#include <stdio.h>

void minmax(int a[], int length, int *min, int *max);

int main()
{
    int a[] = {2, 4, 6, 7, 1, 3, 5, 9, 11, 13, 23, 14, 32, 98};
    int min, max;
    minmax(a, sizeof(a) / sizeof(a[1]), &min, &max);
    printf("min = %d, max = %d\n", min, max);
    return 0;
}

void minmax(int a[], int length, int *min, int *max)
{
    int i;
    *min = *max =a[0];
    for (i = 1; i < length; i++) {
        if (a[i] > *max) {
            *max = a[i];
        } else if(a[i] < *min) {
            *min = a[i];
        }
    }
}
