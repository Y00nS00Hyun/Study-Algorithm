#include <stdio.h>
#include <string.h>

int main(void)
{
    int people;
    printf("입력할 사람 수를 입력하세요: ");
    scanf("%d", &people);

    int age[10000];
    char name[10000][100]; // 2차원 배열: 배열에 문자열 저장
    int soohyun;
    char goohyun[100];

    for (int i = 0; i < people; i++)
    {
        scanf("%d %s", &age[i], name[i]);
        // scanf("%d", &age[i]);
    }

    for (int i = 0; i < people - 1; i++)
    {
        for (int j = 0; j < people - 1; j++)
        {
            if (age[j] > age[j + 1])
            {
                soohyun = age[j];
                age[j] = age[j + 1];
                age[j + 1] = soohyun;

                // c언어에서 문자끼리 교환할 때 쓰는 함수: strcpy
                strcpy(goohyun, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], goohyun);
            }
        }
    }

    for (int i = 0; i < people; i++)
    {
        printf("%d %s \n", age[i], name[i]);
    }
}