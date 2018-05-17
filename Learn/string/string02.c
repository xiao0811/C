#include <stdio.h>

int main()
{
    /* 
     * 第一种指针初始化为指向一个字符串常量
     * 相当于 const char * str, str里的值不能修改
     * 如果需要修改字符串, 应该用数组
     */
    char * str1 = "Hello, world!";
    char str2[] = "Hello, world!";

    //str1[2] = 'E';    // segmentation fault
    str2[2] = 'E';

    printf("str1 pointer: %p\n", str1);
    printf("str2 pointer: %p\n", str2);
    return 0;
}
