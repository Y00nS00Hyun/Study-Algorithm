#include <stdio.h>
#include <stdlib.h>

typedef struct{
    long long start;
    long long end;
} Meeting;

int compare(const void*a, const void*b){
    const Meeting *m1 = (const Meeting*)a;
    const Meeting *m2 = (const Meeting*)b;

    return m1->end - m2->end;
}

int main(){
    int N, count=1;
    Meeting meeting[100000];
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%lld %lld", &meeting[i].start, &meeting[i].end);
    }

    qsort(meeting, N, sizeof(meeting[0]), compare);

    printf("\n");
    for (int i = 0; i < N; i++)
    {
         printf("%lld %lld\n", meeting[i].start, meeting[i].end);
    }

    int end_time=meeting[0].end;
    for (int i = 1; i < N; i++)
    {
        if(meeting[i].start>=end_time){
            end_time=meeting[i].end;
            count++;
            printf("end_time: %d count: %d\n",end_time,count);
        }
    }
    printf("%d",count);
    
}