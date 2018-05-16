#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p;
    int cnt = 0;

    while ( (p = malloc(50 * 1024 * 1024)) ) {
        cnt++;
    }

    printf("分配了%dM空间", cnt * 50);
    free(p);
    return 0;
}
