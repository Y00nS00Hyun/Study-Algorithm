#include <stdio.h>
#include <stdlib.h>

typedef struct soohyun
{
    int data;
    struct soohyun *next;
} Node;

Node *front = NULL;
Node *rear = NULL;

void enqueue(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) // 큐에 아무것도 안들어있다면
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue()
{
    if (front == NULL) // 큐에 아무것도 안들어있다면
    {
        return -1;
    }

    int value = front->data;
    Node *temp = front;
    front = front->next;

    if (front == NULL) // 큐에서 빼냈더니 큐가 비었다면
    {
        rear = NULL;
    }
    free(temp);
    return value;
}

int isEmpty()
{
    return (front == NULL);
}

int size() // 큐 안의 노드의 개수
{
    int count = 0;
    Node *merong = front;
    while (merong != NULL)
    {
        count++;
        merong = merong->next;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        enqueue(i + 1);
    }

    for (int i = 0; i < N - 1; i++)
    {
        printf("%d ", dequeue());
        enqueue(dequeue());
    }

    printf("%d", dequeue());
    return 0;
}