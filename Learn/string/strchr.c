#include <stdio.h>
#include <string.h>

int main(int argc, char const * argv[])
{
    char s[] = "hello";
    char *p = strchr(s, 'l');
    printf("%s\n", strchr(p + 1, 'l'));
    return 0;
}
