#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *parr;
    int i;

    parr = &arr[0];

    for (i = 0; i < 10; i++)
    {
        printf("arr[%d]의 주소값 : %p  ", i, &arr[i]);
        printf("(parr + %d) 의 값 : %p ", i, parr + i);
        printf("\n");
    }
}