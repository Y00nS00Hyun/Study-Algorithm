#include <stdio.h>
#include <string.h>
int main()
{
    char ch;

    while ((ch = getchar()) != EOF)
    {
        printf("%c", ch);
    }
    return 0;
}