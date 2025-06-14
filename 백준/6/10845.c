#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 100001

int soohyun[MAX_QUEUE_SIZE];
int top = -1;

int isEmpty()
{
    if (top < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int value)
{
    soohyun[++top] = value;
}

void pop()
{
    if (isEmpty() == 1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", soohyun[0]);
        for (int i = 0; i < top - 1; i++)
        {
            soohyun[i] = soohyun[i + 1];
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char A[10];
        scanf("%s", A);

        if (strcmp(A, "push") == 0)
        {
            printf("1");
        }
        else if (strcmp(A, "pop") == 0)
        {
            printf("1");
        }
        else if (strcmp(A, "size") == 0)
        {
            printf("2");
        }
        else if (strcmp(A, "empty") == 0)
        {
            printf("3");
        }
        else if (strcmp(A, "front") == 0)
        {
            printf("4");
        }
        else if (strcmp(A, "back") == 0)
        {
            printf("5");
        }
        else
        {
            printf("잘못입력하셨습니뿅");
        }
        printf("\n");
    }
}
