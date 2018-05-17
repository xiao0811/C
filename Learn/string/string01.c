#include <stdio.h>

int main()
{
    char word[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    char str[] = "Hello!";
    // 
    printf("%s\n", word);
    printf("%ld\n", sizeof(word));
    printf("%ld\n", sizeof(str));
    return 0;
}
