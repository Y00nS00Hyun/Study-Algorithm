#include <stdio.h>
double sum(double ary[], int n);

int main()
{
    double data[] = {3.5, 2.0, 4.5, 1.0};
    int length = sizeof(data) / sizeof(data[0]);
    double result = sum(data, length);
    printf("배열의 합: %.2f\n", result);
    return 0;
}

double sum(double ary[], int n)
{
    double total = 0.0;
    for (int i = 0; i < n; i++)
    {
        total += ary[i];
    }
    return total;
}