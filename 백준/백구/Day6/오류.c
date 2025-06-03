#include <stdio.h>
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int **parr;
    parr = arr;

    printf("arr[1][1] : %d \n", arr[1][1]);
    printf("parr[1][1] : %d \n", parr[1][1]);
}