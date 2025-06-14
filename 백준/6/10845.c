#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 100001

int soohyun[MAX_QUEUE_SIZE];
int front = 0, rear = 0;
// rear: 다음 데이터를 넣을 위치

int isEmpty()
{
    if (front == rear)
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
    soohyun[rear++] = value;
}

void pop()
{
    if (isEmpty() == 1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", soohyun[front++]);
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
            int value;
            scanf("%d", &value);
            push(value);
        }
        else if (strcmp(A, "pop") == 0)
        {
            pop();
        }
        else if (strcmp(A, "size") == 0)
        {
            printf("%d\n", rear - front);
        }
        else if (strcmp(A, "empty") == 0)
        {
            if (isEmpty() == 1)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if (strcmp(A, "front") == 0)
        {
            if (isEmpty() != 1)
            {
                printf("%d\n", soohyun[front]);
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (strcmp(A, "back") == 0)
        {
            if (isEmpty() != 1)
            {
                printf("%d\n", soohyun[rear - 1]);
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            printf("잘못입력하셨습니다\n");
        }

        // printf("큐: ");
        // for (int i = 0; i < front; i++)
        // {
        //     printf("%d ", soohyun[i]);
        // }
        // printf("\n");
    }
}
