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

    int min = B;
    if(C<min) min=C;
    if (D<min) min=D;

    printf("min : %d\n", min);

    double sum=0;
    for (int i = 0; i < min; i++)
    {
        sum += burger[i]+side[i]+drink[i];
        printf("min까지의 %d 번째 sum: %f\n",i, sum);
    }
    sum = sum * 0.9;
    printf("min까지의 sum: %f\n", sum);
    
    for (int i = min; i < B; i++)
    {
        sum += burger[i];
    }
    printf("min까지의 sum + burger: %f\n", sum);

    for (int i = min; i < C; i++)
    {
        sum += side[i];
    }
    printf("min까지의 sum + side: %f\n", sum);

    for (int i = min; i < D; i++)
    {
        sum += drink[i];
    }
    printf("min까지의 sum + drink: %f\n", sum);
    
    printf("최종 : %f", sum);
}