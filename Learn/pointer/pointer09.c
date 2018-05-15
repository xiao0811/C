#include <stdio.h>

int divide(int a, int b, float *result);

int main()
{
    int a, b;
    printf("输入第一个数字: ");
    scanf("%d", &a);
    printf("输入第二个数字: ");
    scanf("%d", &b);
    float c;
    if (divide(a, b, &c)) {
        printf("%d / %d = %.2f\n", a, b ,c);
    }
    return 0;
}

int divide(int a, int b, float *result)
{
    int ret = 1;
    if (b == 0) ret =0;
    else {
        *result = (float)a / b;
    }

    return ret;
}
