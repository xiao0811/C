#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i;
    int * a;
    printf("输入数量: ");
    scanf("%d", &number);
    a = (int *)malloc(number * sizeof(int));    // 申请动态空间
//    int a[number];  // c99
    
    for (i = 0; i < number; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < number; i++) {
        printf("%d\n", a[i]);
    }
    free(a);       // 释放动态分配空间
    return 0;
}
