#include <stdio.h>
int main()
{
    char arr[1000];
    int a = 0;

    gets(arr);
    scanf("%d", &a);
    printf("%c", arr[a - 1]);
}