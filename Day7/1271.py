#  #include <stdio.h>
#  int main(void)
#  {
#      int a, b;
#      scanf("%d %d", &a, &b);
#      printf("%d\n", a / b);
#      printf("%d", a - (a / b) * b);
#  }
#  기껏 풀어놨더니 파이썬으로 풀랜다 -> 파이썬은 int형이 자동으로 아주 큰 정수(BigInteger) 를 지원하기 때문

a, b = map(int, input().split())
print(a//b)
print(a%b)