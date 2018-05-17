#include <stdio.h>

int main()
{
    char str1[] = "xiaosha";
    char * str2;
    // char str3[] = str1;
    str2 = str1;
    printf("str1 pointer: %p\n", str1);
    printf("str2 pointer: %p\n", str2);
    printf("%s\n", str2);
    return 0;
}
