#include <stdio.h>
#include <stdlib.h>

int compare(const void*a, const void*b){
    return(*(int*)b-*(int*)a);
}

int main()
{
    int B, C, D;
    int burger[1000], side[1000], drink[1000];

    scanf("%d %d %d", &B, &C, &D);

    for (int i = 0; i < B; i++)
    {
        scanf("%d", &burger[i]);
    }
    qsort(burger, B, 4, compare);

     for (int i = 0; i < C; i++)
    {
        scanf("%d", &side[i]);
    }
    qsort(side, C, 4, compare);

     for (int i = 0; i < D; i++)
    {
        scanf("%d", &drink[i]);
    }
    qsort(drink, D, 4, compare);

    int sum=0;

    for (int i = 0; i < B; i++)
    {
        sum += burger[i];
    }

    for (int i = 0; i < C; i++)
    {
        sum += side[i];
    }

    for (int i = 0; i < D; i++)
    {
        sum += drink[i];
    }

    int min = B;
    if(C<min) min=C;
    if (D<min) min=D;

    double sum_discount=0;
    for (int i = 0; i < min; i++)
    {
        sum_discount += burger[i]+side[i]+drink[i];
    }
    sum_discount = sum_discount * 0.9;
    
    for (int i = min; i < B; i++)
    {
        sum_discount += burger[i];
    }

    for (int i = min; i < C; i++)
    {
        sum_discount += side[i];
    }

    for (int i = min; i < D; i++)
    {
        sum_discount += drink[i];
    }

    printf("%d\n", sum);
    printf("%d", (int)sum_discount);
}