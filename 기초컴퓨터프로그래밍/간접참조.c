#include <stdio.h>
int main(void)
{
    int i = 0;
    char c = 'A';

    int *pi = &i;
    char *pc = &c;
    printf("간접참조 출력: %d %c\n", *pi, *pc);

    *pi = 200; // 변수 i를 *pi로 간접참조하여 그 내용을 수정
    *pc = 'B'; // 변수 c를 *pc로 간접참조하여 그 내용을 수정
    printf("직접참조 출력: %d %c\n", i, c);
}