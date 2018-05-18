#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
char * mystrcpy(char * restrict dst, const char * restrict src);
int main(int argc, char const *argv[])
{
    char str1[] = "abc";
    char *str2;
    mystrcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
}

char * mystrcpy(char * restrict dst, const char * restrict src)
{
    int i;
    while (src[i] != '\0') {
        dst[i] = src[i];
        src++;
    }
}
*/

int main(int argc, char const *argv[])
{
    char str1[] = "abcde";
    char * str2 = (char *)malloc(strlen(str1) + 1);
    if (strcpy(str2, str1)) {
        printf("%s\n", str2);
    }

    return 0;
}
