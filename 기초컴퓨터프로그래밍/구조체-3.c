#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct book
{
    char title[30];    // 도서 제목
    int year;          // 출판 연도
    char borrower[20]; // 대출자 이름
    int due;           // 남은 대출 기한 (일 수)
};

int main()
{
    // 도서 5권 데이터: 제목, 연도, 대출자, 기한
    struct book books[5] = {
        {"C 프로그래밍", 2018, "홍길동", 7},
        {"자료구조론", 2020, "김민지", 2},
        {"컴퓨터 개론", 2017, "박서준", 5},
        {"운영체제", 2019, "홍길동", 2},
        {"알고리즘 문제해결", 2021, "이예진", 3}};

    int a, b;
    printf("조회할 남은 기한(일)을 입력하세요: ");
    scanf("%d", &a);

    printf("[도서 대출 정보]\n");
    int book_count = sizeof(books) / sizeof(books[0]);
    for (int i = 0; i < book_count; i++)
    {
        if (books[i].due == a)
        {
            printf("제목: %-20s 출판: %d 대출자: %-10s 기한: %d일\n",
                   books[i].title, books[i].year, books[i].borrower, books[i].due);
            b++;
        }
    }
    if (b == 0)
    {
        printf("대출 기한이 %d일 남은 도서가 없습니다.", a);
    }

    return 0;
}