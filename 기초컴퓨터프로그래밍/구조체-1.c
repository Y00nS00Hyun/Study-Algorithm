#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct account
{
    char name[12];  // 계좌주 이름
    int actnum;     // 계좌번호
    double balance; // 잔고
};
int main(void)
{
    struct account myacc;
    printf("계좌정보를 입력하세요(이름 번호 잔고)>>");
    scanf("%s %d %lf", myacc.name, &myacc.actnum, &myacc.balance);
    printf("이름 : %s\n", myacc.name);
    printf("계좌번호 : %d\n", myacc.actnum);
    printf("잔고 : %.0f원\n", myacc.balance);
    return 0;
}