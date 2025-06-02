int main(void)
{
    int a[] = {10, 20};
    int *p = &a[0]; // 포인터 선언, 초기화
    printf("%d %d\n\n", *p, *(p + 1));
    printf("%d\n", *p++); // *(p++) 동일
    printf("%d\n\n", *p);

    p = &a[0];            // 배열의 처음으로 주소 재설정
    printf("%d\n", *++p); // *(++p) 동일
    printf("%d\n\n", *p);

    p = &a[0]; // 배열의 처음으로 주소 재설정
    printf("%d\n", (*p)++);

    printf("%d\n\n", *p);

    a[0] = 10;            // 다시 배열의 첫 번째 원소에 10 저장
    p = &a[0];            // 다시 배열의 첫 번째 원소 주소 값 대입
    printf("%d\n", ++*p); // ++(*p) 동일
    printf("%d\n\n", *p);

    return 0;
}