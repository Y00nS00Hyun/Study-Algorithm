// #include <stdio.h>
// int main()
// {
//     int n, m, i, j, k, arr[100] = 0, sw[200] = 0;
//     scanf("%d %d", &n, &m);

//     for (i = 0; i < 2 * m; i += 2)
//     {
//         scanf("%d %d", &sw[i + 1], &sw[i + 2]);
//     }

//     for (i = 1; i < 2 * m + 1; i += 2)
//     {
//         for (j = 0; j < arr[i + 2] - arr[i + 1]; j++)
//         {
//             for (k = j + 1; k > j; k--)
//             {
//                 printf("%d", arr[k]);
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, m, i, j, p, q, temp, arr[100];
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &p, &q);

        for (j = 0; j < (q - p + 1) / 2; j++)
        {
            temp = arr[p + j - 1];
            arr[p + j - 1] = arr[q - j - 1];
            arr[q - j - 1] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
