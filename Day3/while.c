#include <stdio.h>
int main()
{
  int i = 1, sum = 0;
  while (i <= 100)
  {
    sum = sum + i;
    i++;
  }
  printf("1~100 싹 다 모아 더해보자 > %d", sum);
  return 0;
}