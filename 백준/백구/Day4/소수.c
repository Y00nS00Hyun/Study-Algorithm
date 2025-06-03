#include <stdio.h>
int main()
{
    int guess = 5;
    int index = 1;
    int prime[1000];
    prime[0] = 2, prime[1] = 3;
    for (;;)
    {
        int ok = 0;
        for (int i = 0; i <= index; i++)
        {
            if (guess % prime[i] != 0)
            {
                ok++;
            }
            else
            {
                break;
            }
        }
    }
}