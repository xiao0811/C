#include <stdio.h>
#include <string.h>

size_t mylen(const char* s);

int main(int argc, char const *argv[])
{
    char line[] = "Hello";
    printf("strlen=%lu\n", strlen(line));
    printf("sizeof=%lu\n", sizeof(line));
    printf("mylen =%ld\n", mylen(line));
    return 0;
}

size_t mylen(const char *s)
{
    int len = 0;
        
    while (s[len] != '\0') {
        len++;
    }
    return len;
}
