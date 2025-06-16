#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct member
{
    int age;
    char name[101];
};

int compare(const void *a, const void *b)
{
    struct member *m1 = (struct member *)a;
    struct member *m2 = (struct member *)b;

    return m1->age > m2->age;
}

int main()
{
    int N;
    scanf("%d", &N);

    struct member *members = (struct member *)malloc(sizeof(struct member) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %s", &members[i].age, members[i].name);
    }

    qsort(members, N, sizeof(struct member), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    free(members);

    return 0;
}