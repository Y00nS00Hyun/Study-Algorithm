#include <stdio.h>
int main(void)
{
    int data = 123;
    printf("data : %d\n", data);
    printf("*(&data) : %d\n", *(&data));
}