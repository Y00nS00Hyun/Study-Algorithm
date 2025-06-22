#include <stdio.h>

int main()
{
    int A, B, V;
    int soohyun = 0;
    int count = 0;

    scanf("%d %d %d", &A, &B, &V);
    while (soohyun <= V)
    {
        soohyun += A;
        count++;
        if (soohyun >= V)
        {
            break;
        }
        else
        {
            soohyun -= B;
        }
    }

    printf("%d", count);
}