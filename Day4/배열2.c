#include <stdio.h>
int main()
{
    int arr[10] = {21, 32, 54, 845, 1, -6475, 789, 8745, 50, 100};
    for (int i = 0; i < 10; i++)
    {
        printf("배열의 %d번째 원소: %d\n", i + 1, arr[i]);
    }
    return 0;
}