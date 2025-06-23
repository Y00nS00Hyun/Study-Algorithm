#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h>   // time()
int main()
{
    srand(time(NULL));
    int r = rand() % 100 + 1;
    printf("랜덤 숫자: %d\n", r);
    return 0;
}