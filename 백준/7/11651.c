#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}My_name_is;

//👽
int compare(const void*a, const void*b){
    const My_name_is *ptr1= (const My_name_is*) a;
    const My_name_is *ptr2 = (const My_name_is*) b;

    if(ptr1->y!=ptr2->y){
        return ptr1->y - ptr2->y;
    }else{
        return ptr1->x - ptr2->x;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    My_name_is soohyun[100000];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &soohyun[i].x, &soohyun[i].y);
    }
    qsort(soohyun, N, sizeof(soohyun[0]), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", soohyun[i].x, soohyun[i].y);
    }
}