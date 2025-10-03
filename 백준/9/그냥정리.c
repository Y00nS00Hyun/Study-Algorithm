#include <stdio.h>
#include <string.h>

int arr[10000000];

int main()
{
    double a = 2.3;
    printf("%.0f\n", a);

    arr[1] = 0;
    printf("%d", arr[1]);

    char brr[100] = "Hello mikong";
    printf("%s\n", brr);

    char abc[10000];
    scanf("%s", abc);
    printf("%s", abc);
}