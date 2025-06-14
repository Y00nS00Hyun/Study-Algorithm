#include <stdio.h>
#include <stdlib.h>
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
}

int main()
{
    int N;
    scanf("%d", &N);
}
