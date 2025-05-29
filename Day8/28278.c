#include <stdio.h>
#define MAX_STACK_SIZE 1000000
// soohyun[0]~soohyun[999999]까지 1000000개의 공간이 있다는 의미

int soohyun[MAX_STACK_SIZE];
int top = -1;
// top: 맨 위의 인덱스 번호
// soohyun[top]: 맨 위에 있는 값

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

int isFull()
{
    if (top + 1 >= MAX_STACK_SIZE) // 꽉 찬 경우
    {
        return 1;
    }
    else // 아직 안 찬 경우
    {
        return 0;
    }
}

void push(int value)
{
    // 스택에 값을 넣는 코드
    if (isFull() == 0)
    {
        soohyun[++top] = value;
    }
}

void pop()
{
    if (isEmpty() == 1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", soohyun[top]);
        top--;
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {

        int number;
        scanf("%d", &number);
        switch (number)
        {
        case 1:
        {
            int value; // case 바로 밑에 int 선언 할 수 없음 -> 중괄호로 감싸기
            scanf("%d", &value);
            push(value);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            printf("%d\n", top + 1);
            break;
        }
        case 4:
        {
            if (isEmpty() == 1)
            {
                printf("1\n"); // 빈 경우
            }
            else
            {
                printf("0\n");
            }
            break;
        }
        case 5:
        {
            if (isEmpty() == 1)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", soohyun[top]);
            }
            break;
        }

        default:
            printf("잘못된 명령어를 입력하셨습니다!\n");
        }
    }

    // printf("\n⭐ soohyun 배열의 내부 ⭐\n");
    // for (int i = 0; i < top + 1; i++)
    // {
    //     printf("%d ", soohyun[i]);
    // }
}