#include <stdio.h>
#include <stdlib.h>

int compare(const void*a, const void*b){
    return *(int*)a-*(int*)b; //오름차순
}

int main()
{
    int dice[6];
    long long N, answer=0;
    scanf("%lld", &N);

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &dice[i]);
    }
    qsort(dice, 6, 4, compare);

    if(N==1){
        printf("%d", dice[0]+dice[1]+dice[2]+dice[3]+dice[4]);
        return 0;
    }

    answer=N*N*dice[0];

    answer += dice[1]*4+dice[2]*4+dice[1]*4*(N-2);

    answer += (N-1)*(dice[0]*4+dice[1]*4+dice[0]*4*(N-2));
    
    printf("%lld", answer);
}