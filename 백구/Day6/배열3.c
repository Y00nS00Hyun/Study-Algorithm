#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};

    printf("arr 의 정체 : %p \n", arr);
    printf("arr[0] 의 주소값 : %p \n", &arr[0]);

    return 0;
}