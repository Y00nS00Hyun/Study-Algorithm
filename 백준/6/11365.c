#include <stdio.h>
#include <string.h>

int main()
{
    char soohyun[500];

    while (1)
    {
        fgets(soohyun, 500, stdin);
        soohyun[strcspn(soohyun, "\n")] = '\0';

        if (strcmp(soohyun, "END") == 0)
        {
            break;
        }

        int number = 0;
        number = strlen(soohyun);

        for (int i = 0; i < number; i++)
        {
            printf("%c", soohyun[number - i - 1]);
        }
        printf("\n");
    }
}