#include <stdio.h>
#define MAX_STACK_SIZE 100000

int soohyun[MAX_STACK_SIZE];
int top = -1;

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

int main()
{
    int number;
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("1");
        break;
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