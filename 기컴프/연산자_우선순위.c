#include <stdio.h>
int main(void)
{
    int speed = 90;
    int x = 1, y = 2, z = 3;

    printf("%d", 60 <= speed && speed <= 80 + 20);
    printf("%d", ((60 <= speed) && (speed <= (80 + 20))));

    printf("%d", x % 2 == 0 ? y + z : y * z);
    printf("%d", (x % 2 == 0) ? (y + z) : (y * z));

    printf("%d", speed += ++x && y - 2);
    printf("%d", speed += ((++x) && (y - 2)));
    return 0;
}