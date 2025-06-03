
#include <stdio.h>

struct P
{
    char name[51]; //%s
    float credit;  //%f
    char grade[3]; // char 은 한 글자, null 고려해서 하나 더 추가
};

int main()
{
    struct P a[20];
    int count = 0;
    float score;
    double x;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %f %s", a[i].name, &a[i].credit, a[i].grade);

        if (a[i].grade[0] == 'A' && a[i].grade[1] == '+')
        {
            score += 4.5 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'A' && a[i].grade[1] == '0')
        {
            score += 4.0 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'B' && a[i].grade[1] == '+')
        {
            score += 3.5 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'B' && a[i].grade[1] == '0')
        {
            score += 3.0 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'C' && a[i].grade[1] == '+')
        {
            score += 2.5 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'C' && a[i].grade[1] == '0')
        {
            score += 2.0 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'D' && a[i].grade[1] == '+')
        {
            score += 1.5 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'D' && a[i].grade[1] == '0')
        {
            score += 1.0 * a[i].credit;
            count += a[i].credit;
        }
        if (a[i].grade[0] == 'F')
        {
            score += 0.0 * a[i].credit;
            count += a[i].credit;
        }
        else
            continue;
    }
    printf("%lf", score / count);
    return 0;
}