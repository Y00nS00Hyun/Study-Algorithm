#include <stdio.h>
#define MAX_STACK_SIZE 100000
// soohyun[0]~soohyun[99999]까지 100000개의 공간이 있다는 의미

int soohyun[MAX_STACK_SIZE];
int top = -1;
// top: 맨 위의 인덱스 번호
// soohyun[top]: 맨 위에 있는 값

int isEmpty()
{
    if (top < 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
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
    if (isFull() == 1)
    {
        printf("스택이 가득 찼습니다.");
    }
    else
    {
        soohyun[++top] = value;
    }
}

int main()
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
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        isEmpty();
        break;
    case 5:
        printf("5");
        break;

    default:
        printf("잘못된 명령어를 입력하셨습니다.");
    }
}